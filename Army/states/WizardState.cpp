#include "WizardState.h"

WizardState::WizardState(int hp, int dmg, int mana , const std::string& name)
	: MagicState(hp, dmg, mana, name), BaseState(hp, dmg, name) {

};

WizardState::~WizardState() {};
