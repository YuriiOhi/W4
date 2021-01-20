#include "RogueAttack.h"

RogueAttack::RogueAttack() {};
RogueAttack::~RogueAttack() {};

void RogueAttack::attack(Unit* attacker, Unit* enemy) {
	enemy->takePDamage(attacker->getState().getDmg());
};

