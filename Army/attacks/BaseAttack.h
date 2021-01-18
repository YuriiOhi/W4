#ifndef BASEATTACK_H
#define BASEATTACK_H

#include <iostream>
#include "Unit.h"

class Unit;
// #include "../units/Unit.h"

class BaseAttack {
public:
	BaseAttack();
	virtual ~BaseAttack();

	virtual void attack(Unit* attacker, Unit* enemy);
	virtual void counterAttack(Unit* attacker, Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, BaseAttack& attack);

#endif // BASEATTACK_H