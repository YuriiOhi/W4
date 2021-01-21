#include "MagicAttack.h"
#include "../units/Unit.h"
#include "../spells/BaseSpell.h"
#include "../spellBook/SpellBook.h"
#include "../spellcasters/SpellCaster.h"

MagicAttack::MagicAttack(SpellCaster* owner, BaseSpell* spell) {
	this->owner = owner;
	this->spell = spell;
};

MagicAttack::~MagicAttack() {
    delete(this->spell);
};

void MagicAttack::changeSpell(BaseSpell* spell) {
    delete(this->spell);
    this->spell = spell;
};

void MagicAttack::cast(Unit* enemy) {
    this->owner->ensureIsAlive();
    this->owner->spendMana(this->spell->getCost());
    this->spell->action(enemy, false);
};
