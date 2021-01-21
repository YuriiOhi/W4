#include "SpellBook.h"
#include "../spells/BaseSpell.h"
#include <map>
#include "../spells/FireBall.h"
#include "../spells/Curse.h"
#include "../spells/Heal.h"
#include "../spells/Motivate.h"

SpellBook::SpellBook() {
    theSpellBook = this;
    spells = {
             {fireball, new FireBall(static_cast<int>(NUM::TWENTY), static_cast<int>(NUM::TEN), theSpellBook)},
             {heal, new Heal(static_cast<int>(NUM::TWENTY), static_cast<int>(NUM::TEN), theSpellBook)},
             {curse, new Curse(static_cast<int>(NUM::TWENTY), static_cast<int>(NUM::TWENTY), theSpellBook)},
             {motivate, new Motivate(static_cast<int>(NUM::TEN), static_cast<int>(NUM::TEN), theSpellBook)},
    };
};

SpellBook::~SpellBook() {};

SpellBook::SpellBook(const SpellBook*) {};

SpellBook* SpellBook::InitiateBook() {
    if ( !theSpellBook ) {
        theSpellBook = new SpellBook();
    }

    return theSpellBook;
};

// BaseSpell* SpellBook::getSpell(BaseSpell* spell) {
//     return this->spells.at(spell);
// };

SpellBook* SpellBook::theSpellBook = nullptr;