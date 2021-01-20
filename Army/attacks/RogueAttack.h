#ifndef ROGUE_ATTACK_H
#define ROGUE_ATTACK_H

#include "BaseAttack.h"

class RogueAttack : public BaseAttack {
	public:
		RogueAttack();
		virtual ~RogueAttack();
		
		virtual void attack(Unit* attacker, Unit* enemy);
};

#endif // ROGUE_ATTACK_H
