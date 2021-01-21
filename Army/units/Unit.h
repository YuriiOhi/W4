#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "../config.h"
#include "../attacks/BaseAttack.h"
#include "../states/BaseState.h"

class BaseAttack;

class Unit {
	protected:
		BaseState* uState;
		BaseAttack* uAttack;

	public:
		Unit(BaseState* uState, BaseAttack* uAttack);
		virtual ~Unit();

		BaseState& getState() const;
		BaseAttack& getAttack() const;
		void ensureIsAlive();
		void attack(Unit* enemy);
		void counterAttack(Unit* enemy);
		void convertOther(Unit* enemy);
		void turnMyselfInto();
		void changeState(BaseState* newState, BaseAttack* newAttack);
		void takePDamage(int dmg);
		void takeMDamage(int dmg);
		void addHP(int hp);

};

std::ostream& operator<<(std::ostream& out, Unit& unit);	

#endif // UNIT_H
