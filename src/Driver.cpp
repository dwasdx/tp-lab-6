//
//  Driver.cpp
//  lab6
//
//  Created by Андрей Журавлев on 04.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#include <stdio.h>
#include "Driver.h"

size_t Driver::calcWorkTimePayment() {
	return worktime * rate;
}

void Driver::calcSalary() {
	payment = calcWorkTimePayment();
}
