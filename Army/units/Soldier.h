#ifndef SOLDIER_H
#define SOLDIER_H

#include <iostream>
#include "Unit.h"

class Soldier: public Unit {
	public:
		Soldier(const std::string& name);
		virtual ~Soldier(); 
};

std::ostream& operator<<(std::ostream& out, Soldier& soldier);	

#endif // SOLDIER_H
