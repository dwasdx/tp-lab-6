#include "gtest/gtest.h"
#include "Factory.h"
#include "SeniorManager.h"
#include "TeamLeader.h"
#include "Tester.h"
#include "Driver.h"
#include "Cleaner.h"

TEST(factory_tests, data_split_check) {
	EmpData* data = Factory::splitStringToData("1;Иванов Иван Иванович;1;1000;0;20", ";");
	EXPECT_EQ(data->posID, CLEANER);
	EXPECT_EQ(data->name, "Иванов Иван Иванович");
}

TEST(salary_tests, cleaner_check) {
	EmpData* data = Factory::splitStringToData("1;Зинка;1;1000;0;20", ";");
	Employee* emp = Factory::createEmployee(data);
	emp->calcSalary();
	ASSERT_EQ(emp->getPayment(), 20000);
}

TEST(salary_tests, driver_check) {
	EmpData* data = Factory::splitStringToData("1;Володька;2;1500;0;20", ";");
	Employee* emp = Factory::createEmployee(data);
	emp->calcSalary();
	ASSERT_EQ(emp->getPayment(), 30000);
}

TEST(salary_tests, programmer_check) {
	EmpData* data = Factory::splitStringToData("1;Анатолий;3;3000;0;20", ";");
	Employee* emp = Factory::createEmployee(data);
	emp->calcSalary(15, 600000);
	ASSERT_EQ(emp->getPayment(), 90000);
}

TEST(salary_tests, tester_check) {
	EmpData* data = Factory::splitStringToData("1;Геннадий;4;3000;0;20", ";");
	Employee* emp = Factory::createEmployee(data);
	emp->calcSalary(15, 600000);
	ASSERT_EQ(emp->getPayment(), 85500);
}

TEST(salary_tests, team_leader_check) {
	EmpData* data = Factory::splitStringToData("1;Петр Иванович;5;4000;0;20", ";");
	TeamLeader* emp = (TeamLeader*)Factory::createEmployee(data);
	emp->calcSalary(15, 600000, 300);
	EXPECT_EQ(emp->getPayment(), 90000);

	data = Factory::splitStringToData("1;Анатолий;3;3000;0;20", ";");
	Employee* emp2 = Factory::createEmployee(data);
	emp->addProgrammer((Programmer*)emp2);
	emp->addProgrammer((Programmer*)emp2);
	emp->calcSalary(15, 600000, 300);
	EXPECT_EQ(emp->getPayment(), 90600);
}

TEST(salary_tests, manager_check) {
	EmpData* data = Factory::splitStringToData("1;Сергей;6;0;10;20", ";");
	Manager* emp = (Manager*)Factory::createEmployee(data);
	emp->calcSalary(20, 600000);
	EXPECT_EQ(emp->getPayment(), 120000);
}

TEST(salary_tests, project_manager_check) {
	EmpData* data = Factory::splitStringToData("1;Роман Андреевич;7;0;10;20", ";");
	ProjectManager* emp = (ProjectManager*)Factory::createEmployee(data);
	emp->calcSalary(20, 600000, 300);
	EXPECT_EQ(emp->getPayment(), 120000);

	data = Factory::splitStringToData("1;Сергей;6;0;10;20", ";");
	Manager* emp2 = (Manager*)Factory::createEmployee(data);
	emp->addManager(emp2);
	emp->addManager(emp2);
	emp->addManager(emp2);
	emp->calcSalary(20, 600000, 300);
	EXPECT_EQ(emp->getPayment(),120900);
}

TEST(salary_tests, senior_manager_check) {
	EmpData* data = Factory::splitStringToData("1;Бурунов Сергей Александрович;8;0;15;20", ";");
	SeniorManager* emp = (SeniorManager*)Factory::createEmployee(data);
	emp->calcSalary(20, 600000, 400);
	EXPECT_EQ(emp->getPayment(), 120000);

	data = Factory::splitStringToData("1;Роман Андреевич;7;0;10;20", ";");
	ProjectManager* emp2 = (ProjectManager*)Factory::createEmployee(data);
	emp->addProjectManager(emp2);
	emp->addProjectManager(emp2);
	emp->addProjectManager(emp2);
	emp->calcSalary(20, 600000, 400);
	EXPECT_EQ(emp->getPayment(), 121200);
}
