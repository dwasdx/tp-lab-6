//
//  TeamLeader.cpp
//  lab6
//
//  Created by Андрей Журавлев on 04.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#include <stdio.h>
#include "TeamLeader.h"

void TeamLeader::addTester(Tester *tgt) { testers.push_back(tgt); }

void TeamLeader::removeTester(Tester *tgt) {
	for (auto iter = testers.begin(); iter != testers.end(); iter++) {
		if ((*iter)->getId() == tgt->getId()) {
			testers.erase(iter);
			break;
		}
	}
}

void TeamLeader::removeTester(id_t tgt_id) {
	for (auto iter = testers.begin(); iter != testers.end(); iter++) {
		if ((*iter)->getId() == tgt_id) {
			testers.erase(iter);
			break;
		}
	}
}

void TeamLeader::addProgrammer(Programmer *tgt) { programmers.push_back(tgt); }

void TeamLeader::removeProgrammer(Programmer *tgt) {
	for (auto iter = programmers.begin(); iter != programmers.end(); iter++) {
		if ((*iter)->getId() == tgt->getId()) {
			programmers.erase(iter);
			break;
		}
	}
}

void TeamLeader::removeProgrammer(id_t tgt_id) {
	for (auto iter = programmers.begin(); iter != programmers.end(); iter++) {
		if ((*iter)->getId() == tgt_id) {
			programmers.erase(iter);
			break;
		}
	}
}

void TeamLeader::clearTesters() { testers.clear(); }

void TeamLeader::clearProgrammers() { programmers.clear(); }

void TeamLeader::clearAll() { testers.clear(); programmers.clear(); }

size_t TeamLeader::calcHeadingPayment(int leader_rate) {
	return leader_rate * (testers.size() + programmers.size());
}

void TeamLeader::calcSalary(int contribution, int budget, int leader_rate) {
	payment = calcWorkTimePayment() + calcProjectPayment(contribution, budget) + calcHeadingPayment(leader_rate);
}
