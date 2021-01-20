#ifndef VAMPIRE_ATTACK_H
#define VAMPIRE_ATTACK_H

#include "BaseAttack.h"
#include "../states/BaseState.h"
#include "../states/VampireState.h"


class VampireAttack : public BaseAttack {
	public:
		VampireAttack();
		virtual ~VampireAttack();
		
		virtual void attack(Unit* attacker, Unit* enemy);
		virtual void counterAttack(Unit* attacker, Unit* enemy);
		virtual void convertOther(Unit* enemy);
};

#endif // VAMPIRE_ATTACK_H
