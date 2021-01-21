#include "HealerAttack.h"
#include "../attacks/MagicAttack.h"
#include "../spellBook/SpellBook.h"
#include "../spells/BaseSpell.h"
#include "../spellcasters/SpellCaster.h"

HealerAttack::HealerAttack(SpellCaster* owner, BaseSpell* spell) : MagicAttack(owner, spell) {
	this->owner = owner;
	this->spell = spell;
};

HealerAttack::~HealerAttack() {
    delete(this->spell);
};

void HealerAttack::cast(Unit* enemy) {
    this->owner->ensureIsAlive();
    this->owner->spendMana(this->spell->getCost());
    this->spell->action(enemy, static_cast<bool>(COMBAT_WIZ::WIZARD));
};
