#ifndef MAGIC_ATTACK_H
#define MAGIC_ATTACK_H

class Unit;
class BaseSpell;
class SpellBook;
class SpellCaster;

class MagicAttack {
    protected:
    	BaseSpell* spell;
        SpellCaster* owner;

    public:
        MagicAttack(SpellCaster* owner, BaseSpell* spell);
        virtual ~MagicAttack();
        
        void changeSpell(BaseSpell* spell);
        virtual void cast(Unit* enemy);
};

#endif // MAGIC_ATTACK_H
