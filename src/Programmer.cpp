//
//  Programmer.cpp
//  lab6
//
//  Created by Андрей Журавлев on 04.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#include <stdio.h>
#include "Programmer.h"

size_t Programmer::calcWorkTimePayment() {
	return rate * worktime;
}

size_t Programmer::calcProjectPayment(int contribution, int budget) {
	return budget * contribution / 100;
}

void Programmer::calcSalary(int contribution, int budget) {
	payment = calcWorkTimePayment() + calcProjectPayment(contribution, budget);
}
