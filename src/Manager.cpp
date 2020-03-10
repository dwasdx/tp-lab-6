//
//  Manager.cpp
//  lab6
//
//  Created by Андрей Журавлев on 04.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#include <stdio.h>
#include "Manager.h"

size_t Manager::calcProjectPayment(int contribution, int budget) {
	return contribution * budget / 100;
}

void Manager::calcSalary(int contribution, int budget) {
	this->payment = calcProjectPayment(contribution, budget);
}
