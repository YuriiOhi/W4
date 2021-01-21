#ifndef SPELL_BOOK_H
#define SPELL_BOOK_H

#include <iostream>
#include <map>

class BaseSpell;
class FireBall;
class Curse;
class Heal;
class Motivate;

typedef enum {
    fireball,
    heal,
    curse,
    motivate
} allSpells ;

class SpellBook {
    protected:
        std::map<allSpells, BaseSpell*> spells;
        static SpellBook* theSpellBook;

        SpellBook();
        ~SpellBook();

        SpellBook(const SpellBook*);

    public:
        static SpellBook* InitiateBook();
    //   BaseSpell* getSpell(BaseSpell* spell);
};

#endif //SPELLBOOK_H
