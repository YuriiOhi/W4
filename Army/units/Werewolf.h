#ifndef WEREWOLF_H
#define WEREWOLF_H

#include <iostream>
#include "Unit.h"
#include "../states/WerewolfState.h"
#include "../attacks/WerewolfAttack.h"


class Werewolf : public Unit {
	public:
		Werewolf(const std::string& name);
		virtual ~Werewolf();

		virtual void convertOther(Unit* enemy);
		virtual void turnMyselfInto();
};

std::ostream& operator<<(std::ostream& out, Werewolf& werewolf);	

#endif // WEREWOLF_H
