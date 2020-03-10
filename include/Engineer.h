//
//  Engineer.h
//  lab6
//
//  Created by Андрей Журавлев on 03.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#ifndef Engineer_h
#define Engineer_h
#include "Employee.h"
#include "WorkTime.h"
#include "Project.h"

class Engineer: public Employee, public WorkTIme, public Project {
protected:
	int rate;
	
public:
	Engineer(id_t id, std::string name, unsigned worktime, int rate) : Employee(id, name, worktime), rate(0) {}
	
	void calcSalary() { return; }
	void calcSalary(int contribution, int budget, int leader_rate) { return; }
};

#endif /* Engineer_h */
