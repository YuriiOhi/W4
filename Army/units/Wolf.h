#ifndef WOLF_H
#define WOLF_H

#include <iostream>
#include "Unit.h"
#include "../states/WolfState.h"

class Wolf : public Unit {
	public:
		Wolf(const std::string& name);
		~Wolf();
};

std::ostream& operator<<(std::ostream& out, Wolf& wolf);	

#endif // WEREWOLF_H
