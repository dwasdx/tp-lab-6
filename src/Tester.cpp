//
//  Tester.cpp
//  lab6
//
//  Created by Андрей Журавлев on 04.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#include <stdio.h>
#include "Tester.h"

size_t Tester::calcWorkTimePayment() {
	return rate * worktime;
}

size_t Tester::calcProjectPayment(int contribution, int budget) {
	return 0.95 * budget * contribution / 100;
}

void Tester::calcSalary(int contribution, int budget) {
	payment = calcWorkTimePayment() + calcProjectPayment(contribution, budget);
}
