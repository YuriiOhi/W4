#include "BaseSpell.h"
#include "../units/Unit.h"
#include "../spellcasters/SpellCaster.h"
#include "../spellBook/SpellBook.h"

BaseSpell::BaseSpell(int actionPoints, int cost, SpellBook* spellBook) {
	this->actionPoints = actionPoints;
	this->cost = cost;
};

BaseSpell::~BaseSpell() {};

int BaseSpell::getActionPoints() const {
    return this->actionPoints;
};

int BaseSpell::getCost() const {
    return this->cost;
};

void BaseSpell::action(Unit* target, bool isCombatWizard) {};
