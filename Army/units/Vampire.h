#ifndef VAMPIRE_H
#define VAMPIRE_H

#include <iostream>
#include "Unit.h"
#include "../attacks/VampireAttack.h"
#include "../states/VampireState.h"


class Vampire : public Unit {
	public:
		Vampire(const std::string& name);
		virtual ~Vampire();

		virtual void convertOther(Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, Vampire& vampire);	

#endif // VAMPIRE_H
