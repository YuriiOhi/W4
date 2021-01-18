#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "BaseState.h"
#include "BaseAttack.h"

class BaseAttack;

class Unit {
	private:
		BaseState* uState;
		BaseAttack* uAttack;

	public:
		Unit(BaseState* uState, BaseAttack* uAttack);
		virtual ~Unit();

		BaseState& getState() const;

		void attack(Unit* enemy);
		void counterAttack(Unit* enemy);

		void takePDamage(int dmg);
		void takeMDamage(int dmg);
};

std::ostream& operator<<(std::ostream& out, Unit& unit);	

#endif // UNIT_H