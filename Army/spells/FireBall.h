#ifndef FIRE_BALL_H
#define FIRE_BALL_H

#include "BaseSpell.h"
#include "../spellBook/SpellBook.h"
#include "../units/Unit.h"

class Unit;
class SpellBook;
class BaseSpell;

class FireBall : virtual public BaseSpell {
    public:
        FireBall(int actionPoints, int cost, SpellBook* spellBook);
        virtual ~FireBall();
        virtual void action(Unit* target, bool isCombatWizard);
};

#endif // FIRE_BALL_H
