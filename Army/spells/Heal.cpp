#include "Heal.h"

Heal::Heal(int actionPoints, int cost, SpellBook* spellBook) : BaseSpell(actionPoints, cost, spellBook) {}

Heal::~Heal() {}

void Heal::action(Unit* target, bool isCombatWizard) {
	if ( isCombatWizard == true ) { 
    	target->addHP(this->actionPoints / 2);
    	return;
    }
    target->addHP(this->actionPoints);
}
