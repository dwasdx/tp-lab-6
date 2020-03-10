//
//  Tester.h
//  lab6
//
//  Created by Андрей Журавлев on 03.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#ifndef Tester_h
#define Tester_h
#include "Engineer.h"

class Tester: public Engineer {
public:
	Tester(id_t id, std::string name, unsigned worktime, int base) : Engineer(id, name, worktime, base) {}
	size_t calcWorkTimePayment();
	size_t calcProjectPayment(int contribution, int budget);
	
	void calcSalary() { return; }
	void calcSalary(int contribution, int budget);
	void calcSalary(int contribution, int budget, int leader_rate) { return; }
};

#endif /* Tester_h */
