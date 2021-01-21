#ifndef HEAL_H
#define HEAL_H

#include "../units/Unit.h"
#include "BaseSpell.h"
#include "../spellBook/SpellBook.h"

class SpellBook;
class BaseSpell;

class Heal : virtual public BaseSpell {
    public:
        Heal(int actionPoints, int cost, SpellBook* spellBook);
        virtual ~Heal();
        virtual void action(Unit* target, bool isCombatWizard);
};

#endif // HEAL_H
