#ifndef WEREWOLF_ATTACK_H
#define WEREWOLF_ATTACK_H

#include "BaseAttack.h"
#include "../states/BaseState.h"
#include "../states/WerewolfState.h"


class WerewolfAttack : public BaseAttack {
	public:
		WerewolfAttack();
		virtual ~WerewolfAttack();
		
		virtual void convertOther(Unit* enemy);
		virtual void turnMyselfInto(Unit* self);
};

#endif // WEREWOLF_ATTACK_H
