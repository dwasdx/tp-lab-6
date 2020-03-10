//
//  Manager.h
//  lab6
//
//  Created by Андрей Журавлев on 03.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#ifndef Manager_h
#define Manager_h
#include "Employee.h"
#include "Project.h"

class Manager: public Employee, public Project {
private:
	int contribution;
	
public:
	Manager(id_t id, std::string name, unsigned worktime, int contribution) : Employee(id, name, worktime), contribution(contribution) {}
	
	int getPercent() { return contribution; }
	void setPercent(int contribution) { this->contribution = contribution; }
	
	size_t calcProjectPayment(int contribution, int budget);
	void calcSalary() { return; }
	void calcSalary(int contribution, int budget);
	void calcSalary(int contribution, int budget, int leader_rate) { return; }
};

#endif /* Manager_h */
