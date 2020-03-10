//
//  Project.h
//  lab6
//
//  Created by Андрей Журавлев on 03.03.2020.
//  Copyright © 2020 Андрей Журавлев. All rights reserved.
//

#ifndef Project_h
#define Project_h

class Project {
	
public:
	virtual size_t calcProjectPayment(int contribution, int budget) = 0;
};

#endif /* Project_h */
