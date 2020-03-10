//
//  SeniorManager.h
//  lab6
//
//  Created by Андрей Журавлев on 03.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#ifndef SeniorManager_h
#define SeniorManager_h
#include "ProjectManager.h"

class SeniorManager: public ProjectManager {
private:
	std::vector<ProjectManager*> projectManagers;
	
public:
	SeniorManager(id_t id, std::string name, unsigned worktime, int contribution) : ProjectManager(id, name, worktime, contribution) {}
	void addProjectManager(ProjectManager* tgt);
	void removeProjectManager(ProjectManager* tgt);
	void removeProjectManager(id_t tgt_id);
	void clear();
	std::vector<ProjectManager*> getProjectManagers() { return projectManagers; }
	size_t calcHeadingPayment(size_t leader_rate);
	void calcSalary() { return; }
	void calcSalary(int contribution, int budget) { return; }
	void calcSalary(int contribution, int budget, int leader_rate);
};

#endif /* SeniorManager_h */
