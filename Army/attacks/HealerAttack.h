#ifndef HEALER_ATTACK_H
#define HEALER_ATTACK_H
#include "../attacks/MagicAttack.h"

class BaseSpell;
class SpellBook;
class SpellCaster;

class HealerAttack : public MagicAttack {
    protected:
        SpellCaster* owner;
        BaseSpell* spell;

    public:
        HealerAttack(SpellCaster* owner, BaseSpell* spell);
        virtual ~HealerAttack();
        
        virtual void cast(Unit* enemy);
};

#endif // HEALER_ATTACK_H
