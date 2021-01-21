#include "Curse.h"


Curse::Curse(int actionPoints, int cost, SpellBook* spellBook) : BaseSpell(actionPoints, cost, spellBook) {
}

Curse::~Curse() {}

void Curse::action(Unit* target, bool isCombatWizard) {
	if ( isCombatWizard == false ) { 
    	target->takeMDamage(this->getActionPoints() / 2);
    	return;
    }

    target->takeMDamage(this->getActionPoints());
}

