#include "FireBall.h"


FireBall::FireBall(int actionPoints, int cost, SpellBook* spellBook) : BaseSpell(actionPoints, cost, spellBook) {
};

FireBall::~FireBall() {};

void FireBall::action(Unit* target, bool isCombatWizard) {
	if ( isCombatWizard == false ) { 
    	target->takeMDamage(this->getActionPoints() / 2);
    	return;
    }

    target->takeMDamage(this->getActionPoints());
};
