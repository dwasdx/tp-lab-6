//
//  Programmer.h
//  lab6
//
//  Created by Андрей Журавлев on 03.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#ifndef Programmer_h
#define Programmer_h
#include "Engineer.h"

class Programmer: public Engineer {
public:
	Programmer(id_t id, std::string name, unsigned worktime, int rate) : Engineer(id, name, worktime, rate) {}
	size_t calcWorkTimePayment();
	size_t calcProjectPayment(int contribution, int budget);
	
	void calcSalary(int contribution, int budget);
};

#endif /* Programmer_h */
