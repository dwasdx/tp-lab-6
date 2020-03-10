//
//  ProjectManager.h
//  lab6
//
//  Created by Андрей Журавлев on 03.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#ifndef ProjectManager_h
#define ProjectManager_h
#include "Manager.h"
#include "Heading.h"

class ProjectManager: public Manager, public Heading {
private:
	std::vector<Manager*> managers;
public:
	ProjectManager(id_t id, std::string name, unsigned worktime, int contribution) : Manager(id, name, worktime, contribution) {
		managers.clear();
	}
	
	void addManager(Manager* tgt);
	void removeManager(Manager* tgt);
	void removeManager(id_t tgt_id);
	void clear();
	std::vector<Manager*> getManagers() { return managers; }
	size_t calcHeadingPayment(int leader_rate);
	void calcSalary() { return; }
	void calcSalary(int contribution, int budget) { return; }
	void calcSalary(int contribution, int budget, int leader_rate);
};

#endif /* ProjectManager_h */
