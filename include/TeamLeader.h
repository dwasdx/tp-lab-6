//
//  TeamLeader.h
//  lab6
//
//  Created by Андрей Журавлев on 03.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#ifndef TeamLeader_h
#define TeamLeader_h
#include "Programmer.h"
#include "Tester.h"
#include "Heading.h"

class TeamLeader: public Programmer, public Heading {
private:
	std::vector<Programmer*> programmers;
	std::vector<Tester*> testers;
	
public:
	TeamLeader(id_t id, std::string name, unsigned worktime, int rate) : Programmer(id, name, worktime, rate) {}
	void addTester(Tester* tgt);
	void removeTester(Tester* tgt);
	void removeTester(id_t tgt_id);
	void addProgrammer(Programmer* tgt);
	void removeProgrammer(Programmer* tgt);
	void removeProgrammer(id_t tgt_id);
	void clearProgrammers();
	void clearTesters();
	void clearAll();
	std::vector<Tester*> getTesters() { return testers; }
	std::vector<Programmer*> getProgrammers() { return programmers; }
	size_t calcHeadingPayment(int leader_rate);
	void calcSalary(int contribution, int budget, int leader_rate);
};

#endif /* TeamLeader_h */
