#ifndef MOTIVATE_H
#define MOTIVATE_H

#include "BaseSpell.h"
#include "../spellcasters/SpellCaster.h"

class BaseSpell;
class SpellCaster;

class Motivate : virtual public BaseSpell {
    public:
        Motivate(int actionPoints, int cost, SpellBook* spellBook);
        virtual ~Motivate();
        virtual void action(SpellCaster* target, bool isCombatWizard);
};

#endif // MOTIVATE_H
