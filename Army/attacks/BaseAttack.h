#ifndef BASEATTACK_H
#define BASEATTACK_H

#include <iostream>
#include "../config.h"
#include "../units/Unit.h"
class SpellBook;

class Unit;

class BaseAttack {
public:
	BaseAttack();
	virtual ~BaseAttack();

	virtual void attack(Unit* attacker, Unit* enemy);
	virtual void counterAttack(Unit* attacker, Unit* enemy);
	virtual void convertOther(Unit* enemy);
	virtual void turnMyselfInto(Unit* self);

};

#endif // BASEATTACK_H
