#ifndef WIZARD_H
#define WIZARD_H

#include <iostream>
#include "SpellCaster.h"
#include "../states/WizardState.h"
#include "../attacks/WizardAttack.h"
#include "../spells/FireBall.h"

class SpellBook;

class Wizard : virtual public SpellCaster {
	public:
		Wizard(const std::string& name);
		virtual ~Wizard();
};

std::ostream& operator<<(std::ostream& out, Wizard& wizard);	

#endif // WIZARD_H
