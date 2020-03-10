//
//  SeniorManager.cpp
//  lab6
//
//  Created by Андрей Журавлев on 04.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#include <stdio.h>
#include "SeniorManager.h"

void SeniorManager::addProjectManager(ProjectManager *tgt) {
	projectManagers.push_back(tgt);
}

void SeniorManager::removeProjectManager(ProjectManager *tgt) {
	for (auto iter = projectManagers.begin(); iter != projectManagers.end(); iter++) {
		if ((*iter)->getId() == tgt->getId()) {
			projectManagers.erase(iter);
			break;
		}
	}
}

void SeniorManager::removeProjectManager(id_t tgt_id) {
	for (auto iter = projectManagers.begin(); iter != projectManagers.end(); iter++) {
		if ((*iter)->getId() == tgt_id) {
			projectManagers.erase(iter);
			break;
		}
	}
}

void SeniorManager::clear() { projectManagers.clear(); }

size_t SeniorManager::calcHeadingPayment(size_t leader_rate) {
	return leader_rate * projectManagers.size();
}

void SeniorManager::calcSalary(int contribution, int budget, int leader_rate) {
	payment = calcHeadingPayment(leader_rate) + calcProjectPayment(contribution, budget);
}
