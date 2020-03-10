//
//  Classes.h
//  lab6
//
//  Created by Андрей Журавлев on 14.02.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#ifndef Classes_h
#define Classes_h
#include <string>
#include <vector>

class Employee {
protected:
	id_t id;
	std::string name;
	unsigned worktime;
	size_t payment;
	
public:
	Employee(id_t id, std::string name, unsigned worktime): id(id), name(name), worktime(worktime), payment(0) {}
	
	id_t getId() { return id; }
	void setId(id_t id) { this->id = id; }
	std::string getName() { return name; }
	void setName(std::string name) { this->name = name; }
	time_t getWorkTime() { return worktime; }
	void setWorkTime(unsigned worktime) { this->worktime = worktime; }
	size_t getPayment() { return payment; }
	virtual void calcSalary() = 0;
	virtual void calcSalary(int contribution, int budget) = 0;
	virtual void calcSalary(int contribution, int budget, int leader_rate) = 0;
};

#endif /* Classes_h */
