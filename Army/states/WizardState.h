#ifndef WIZARD_STATE_H
#define WIZARD_STATE_H

#include <iostream>
#include "MagicState.h"

class WizardState : public MagicState {
    public:
        WizardState(int hp, int dmg, int mana, const std::string& name);
        virtual ~WizardState();
};

std::ostream& operator<<(std::ostream& out, WizardState& wizardState);

#endif // WIZARD_STATE_H
