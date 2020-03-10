//
//  Cleaner.cpp
//  lab6
//
//  Created by Андрей Журавлев on 03.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#include <stdio.h>
#include "Cleaner.h"

size_t Cleaner::calcWorkTimePayment() {
	return worktime * rate;
}

void Cleaner::calcSalary() {
	payment = calcWorkTimePayment();
}
