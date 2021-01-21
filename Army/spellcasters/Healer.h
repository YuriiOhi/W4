#ifndef HEALER_H
#define HEALER_H

#include <iostream>
#include "SpellCaster.h"
#include "../states/WizardState.h"
#include "../attacks/WizardAttack.h"
#include "../spells/FireBall.h"

class SpellBook;

class Healer : virtual public SpellCaster {
	public:
		Healer(const std::string& name);
		virtual ~Healer();
};

std::ostream& operator<<(std::ostream& out, Healer& healer);	

#endif // HEALER_H
