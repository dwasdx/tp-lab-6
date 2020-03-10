//
//  Driver.h
//  lab6
//
//  Created by Андрей Журавлев on 03.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#ifndef Driver_h
#define Driver_h
#include "Personal.h"

class Driver: public Personal {
public:
	Driver(id_t id, std::string name, unsigned worktime, int rate) : Personal(id, name, worktime, rate) {}
	size_t calcWorkTimePayment();
	void calcSalary();
};

#endif /* Driver_h */
