#ifndef WIZARD_ATTACK_H
#define WIZARD_ATTACK_H
#include "../attacks/MagicAttack.h"

class BaseSpell;
class SpellBook;
class SpellCaster;

class WizardAttack : public MagicAttack {
    protected:
        SpellCaster* owner;
        BaseSpell* spell;

    public:
        WizardAttack(SpellCaster* owner, BaseSpell* spell);
        virtual ~WizardAttack();
        
        virtual void cast(Unit* enemy);
};

#endif // WIZARD_ATTACK_H
