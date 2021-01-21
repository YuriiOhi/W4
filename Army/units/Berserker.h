#ifndef BERSERKER_H
#define BERSERKER_H

#include <iostream>
#include "Unit.h"
#include "../states/BerserkerState.h"

class Berserker : public Unit {
	public:
		Berserker(const std::string& name);
		virtual ~Berserker();
};

std::ostream& operator<<(std::ostream& out, Berserker& berserker);	

#endif // BERSERKER_H
