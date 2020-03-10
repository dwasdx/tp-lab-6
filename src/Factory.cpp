//
//  Factory.cpp
//  lab6
//
//  Created by Андрей Журавлев on 03.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include "Factory.h"

Employee* Factory::createEmployee(EmpData *data) {
	switch (data->posID) {
		case CLEANER:
			return _createCleaner(data->empID, data->name, data->worktime, data->rate);
		case DRIVER:
			return _createDriver(data->empID, data->name, data->worktime, data->rate);
		case PROGRAMMER:
			return _createProgrammer(data->empID, data->name, data->worktime, data->rate);
		case TESTER:
			return _createTester(data->empID, data->name, data->worktime, data->rate);
		case TEAM_LEADER:
			return _createTeamLeader(data->empID, data->name, data->worktime, data->rate);
		case MANAGER:
			return _createManager(data->empID, data->name, data->worktime, data->percent);
		case PROJECT_MANAGER:
			return _createProjectManager(data->empID, data->name, data->worktime, data->percent);
		case SENIOR_MANAGER:
			return _createSeniorManager(data->empID, data->name, data->worktime, data->percent);
		default:
			return NULL;
	}
}

Cleaner* Factory::_createCleaner(id_t id, std::string name, unsigned int worktime, int rate) {
	return new Cleaner(id, name, worktime, rate);
}

Driver* Factory::_createDriver(id_t id, std::string name, unsigned int worktime, int rate) {
	return new Driver(id, name, worktime, rate);
}

Programmer* Factory::_createProgrammer(id_t id, std::string name, unsigned int worktime, int rate) {
	return new Programmer(id, name, worktime, rate);
}

Tester* Factory::_createTester(id_t id, std::string name, unsigned int worktime, int rate) {
	return new Tester(id, name, worktime, rate);
}

TeamLeader* Factory::_createTeamLeader(id_t id, std::string name, unsigned int worktime, int rate) {
	return new TeamLeader(id, name, worktime, rate);
}

Manager* Factory::_createManager(id_t id, std::string name, unsigned int worktime, int contribution) {
	return new Manager(id, name, worktime, contribution);
}

ProjectManager* Factory::_createProjectManager(id_t id, std::string name, unsigned int worktime, int contribution) {
	return new ProjectManager(id, name, worktime, contribution);
}

SeniorManager* Factory::_createSeniorManager(id_t id, std::string name, unsigned int worktime, int contribution) {
	return new SeniorManager(id, name, worktime, contribution);
}

EmpData* Factory::splitStringToData(std::string dataString, std::string delim) {
	std::vector<std::string> res;
	
	size_t pos = dataString.find(delim);
	while (pos != std::string::npos) {
		std::string temp = dataString.substr(0, pos);
		res.push_back(temp);
		dataString = dataString.substr(pos + 1);
		pos = dataString.find(delim);
	}
	res.push_back(dataString);
	
	EmpData* data = new EmpData;
	data->empID = std::atoi(res[0].c_str());
	data->name = res[1];
	data->posID = POSITION(std::atoi(res[2].c_str()));
	data->rate = std::atoi(res[3].c_str());
	data->percent = std::atoi(res[4].c_str());
	data->worktime = std::atoi(res[5].c_str());
	return data;
}
