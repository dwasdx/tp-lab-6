//
//  Factory.h
//  lab6
//
//  Created by Андрей Журавлев on 03.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#ifndef Factory_h
#define Factory_h
#include <map>
#include <string>
#include "SeniorManager.h"
#include "TeamLeader.h"
#include "Tester.h"
#include "Driver.h"
#include "Cleaner.h"

enum POSITION {CLEANER = 1, DRIVER, PROGRAMMER, TESTER, TEAM_LEADER, MANAGER, PROJECT_MANAGER, SENIOR_MANAGER};

struct EmpData {
	POSITION posID;
	id_t empID;
	std::string name;
	unsigned worktime;
	int rate;
	int percent;
};

class Factory {
private:
	static Cleaner* _createCleaner(id_t id, std::string name, unsigned worktime, int rate);
	static Driver* _createDriver(id_t, std::string name, unsigned worktime, int rate);
	static Programmer* _createProgrammer(id_t id, std::string name, unsigned worktime, int rate);
	static Tester* _createTester(id_t id, std::string name, unsigned worktime, int rate);
	static TeamLeader* _createTeamLeader(id_t id, std::string name, unsigned worktime, int rate);
	static Manager* _createManager(id_t id, std::string name, unsigned worktime, int contribution);
	static ProjectManager* _createProjectManager(id_t id, std::string name, unsigned worktime, int contribution);
	static SeniorManager* _createSeniorManager(id_t id, std::string name, unsigned worktime, int contribution);
	
public:
	static Employee* createEmployee(EmpData* data);
	static EmpData* splitStringToData(std::string dataString, std::string delim = " ");
};

#endif /* Factory_h */
