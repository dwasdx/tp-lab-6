//
//  main.cpp
//  lab6
//
//  Created by Андрей Журавлев on 14.02.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#include <iostream>
#include <climits>
#include <fstream>
#include "Factory.h"
#include "SeniorManager.h"
#include "TeamLeader.h"
#include "Tester.h"
#include "Driver.h"
#include "Cleaner.h"

#define PROJ_BUDGET 500000


int main(int argc, const char * argv[]) {
//	std::ifstream file;
//	file.open("db.txt");
//	if (!file.is_open()) {
//		std::cout << "File does not exist" << std::endl;
//		return 1;
//	}
//	std::vector<Employee*> staff;
//	std::vector<POSITION> positions;
//	std::string buf;
//	while (std::getline(file, buf)) {
//		EmpData* data = Factory::splitStringToData(buf);
//		staff.push_back(Factory::createEmployee(data));
//		positions.push_back(data->posID);
//		delete data;
//	}
//
//	for (int i = 0; i < positions.size(); i++) {
//		switch (positions[i]) {
//			case CLEANER:
//			case DRIVER:
//				staff[i]->calcSalary();
//				break;
//			case PROGRAMMER:
//			case TESTER:
//				staff[i]->calcSalary(10, PROJ_BUDGET);
//				break;
//			case TEAM_LEADER:
//				staff[i]->calcSalary(12, PROJ_BUDGET, 250);
//				break;
//			case MANAGER:
//				staff[i]->calcSalary(12, PROJ_BUDGET);
//				break;
//			case PROJECT_MANAGER:
//				staff[i]->calcSalary(15, PROJ_BUDGET, 300);
//				break;
//			case SENIOR_MANAGER:
//				staff[i]->calcSalary(15, PROJ_BUDGET, 320);
//			default:
//				break;
//		}
//	}
	EmpData* data = Factory::splitStringToData("1;Петр Иванович;8;0;15;20", ";");
	SeniorManager* emp = (SeniorManager*)Factory::createEmployee(data);
	
	data = Factory::splitStringToData("1;Петр Иванович;7;0;10;20", ";");
	ProjectManager* emp2 = (ProjectManager*)Factory::createEmployee(data);
	emp->addProjectManager(emp2);
	emp->addProjectManager(emp2);
	emp->addProjectManager(emp2);
	emp->calcSalary(20, 600000, 400);
	std::cout << emp->getPayment() << std::endl;
	
	return 0;
}
