#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include <iostream>
#include "../units/Unit.h"

class MagicState;
class MagicAttack;
class BaseSpell;
class SpellBook;


class SpellCaster: virtual public Unit {
	protected:
		MagicState* magicState;
		MagicAttack* magicAttack;

	public:
		SpellCaster(MagicState* magicState, MagicAttack* magicAttack);
		virtual ~SpellCaster(); 

		MagicState& getMagState() const;
		MagicAttack& getMagAttack() const;

		int getMana() const;
        int getMaxMana() const;

        void addMana(int extra);
        void spendMana(int cost);

        void changeSpell(BaseSpell* newSpell);
        virtual void cast(Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, SpellCaster& sCaster);	

#endif // SPELLCASTER_H
