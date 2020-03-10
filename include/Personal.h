//
//  Personal.h
//  lab6
//
//  Created by Андрей Журавлев on 26.02.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#ifndef Personal_h
#define Personal_h
#include "WorkTime.h"
#include "Employee.h"

class Personal: public Employee, public WorkTIme {
protected:
	int rate;
	
public:
	Personal(id_t id, std::string name, unsigned worktime, int rate): Employee(id, name, worktime), rate(rate) {}
	
	int getHourlyRate() { return rate; }
	void setHourlyRate(int rate) { this->rate = rate; }
	
	void calcSalary(int contribution, int budget) { return; }
	void calcSalary(int contribution, int budget, int leader_rate) { return; }
};

#endif /* Personal_h */

