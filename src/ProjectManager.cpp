//
//  ProjectManager.cpp
//  lab6
//
//  Created by Андрей Журавлев on 04.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#include <stdio.h>
#include "ProjectManager.h"

void ProjectManager::addManager(Manager *tgt) {
	this->managers.push_back(tgt);
}

void ProjectManager::removeManager(Manager *tgt) {
	for (auto iter = managers.begin(); iter != managers.end(); iter++) {
		if ((*iter)->getId() == tgt->getId()) {
			managers.erase(iter);
			break;
		}
	}
}

void ProjectManager::removeManager(id_t tgt_id) {
	for (auto iter = managers.begin(); iter != managers.end(); iter++) {
		if ((*iter)->getId() == tgt_id) {
			managers.erase(iter);
			break;
		}
	}
}

void ProjectManager::clear() { managers.clear(); }

size_t ProjectManager::calcHeadingPayment(int leader_rate) {
	return leader_rate * managers.size();
}

void ProjectManager::calcSalary(int contribution, int budget, int leader_rate) {
	payment = calcHeadingPayment(leader_rate) + calcProjectPayment(contribution, budget);
}
