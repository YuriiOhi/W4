#ifndef BASE_SPELL_H
#define BASE_SPELL_H

class Unit;
class SpellBook;
class SpellCaster;

class BaseSpell {
    protected:
        int actionPoints;
        int cost;
    public:
        BaseSpell(int actionPoints, int cost, SpellBook* spellBook);
        virtual ~BaseSpell();

        int getActionPoints() const;
        int getCost() const;

        virtual void action(Unit* target, bool isCombatWizard);
};

#endif // BASE_SPELL_H
