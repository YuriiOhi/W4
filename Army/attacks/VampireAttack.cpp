#include "VampireAttack.h"
#include "../states/VampireState.h"

VampireAttack::VampireAttack() {};
VampireAttack::~VampireAttack() {};
		
void VampireAttack::attack(Unit* attacker, Unit* enemy) {
	enemy->takePDamage(attacker->getState().getDmg());
	attacker->getState().addHealthPoints(attacker->getState().getDmg() / static_cast<int>(DMG_COEF::TEN));
};

void VampireAttack::counterAttack(Unit* attacker, Unit* enemy) {
	enemy->getState().addHealthPoints(attacker->getState().getDmg() / static_cast<int>(DMG_COEF::TEN));
};

void VampireAttack::convertOther(Unit* enemy) {
	enemy->changeState(new VampireState (enemy->getState().getMaxHp(),
					  					 enemy->getState().getDmg(),
					  					 enemy->getState().getName()),
					   new VampireAttack());										
};
