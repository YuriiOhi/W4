#include "Motivate.h"


Motivate::Motivate(int actionPoints, int cost, SpellBook* spellBook) : BaseSpell(actionPoints, cost, spellBook) {};

Motivate::~Motivate() {};

void Motivate::action(SpellCaster* target, bool isCombatWizard) {
	if ( isCombatWizard == true ) { 
    	target->addMana(this->actionPoints / 2);
    	return;
    }
    target->addMana(this->actionPoints);
};
