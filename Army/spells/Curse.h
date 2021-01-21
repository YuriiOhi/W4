#ifndef CURSE_H
#define CURSE_H

#include "../units/Unit.h"
#include "BaseSpell.h"

class Unit;
class BaseSpell;

class Curse : virtual public BaseSpell {
    public:
        Curse(int actionPoints, int cost, SpellBook* spellBook);
        virtual ~Curse();
        virtual void action(Unit* target, bool isCombatWizard);
};

#endif // MOTIVATE_H
