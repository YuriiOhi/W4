#include "WizardAttack.h"
#include "../attacks/MagicAttack.h"
#include "../spellBook/SpellBook.h"
#include "../spells/BaseSpell.h"
#include "../spellcasters/SpellCaster.h"

WizardAttack::WizardAttack(SpellCaster* owner, BaseSpell* spell) : MagicAttack(owner, spell) {
	this->owner = owner;
	this->spell = spell;
};

WizardAttack::~WizardAttack() {
    delete(this->spell);
};

void WizardAttack::cast(Unit* enemy) {
    this->owner->ensureIsAlive();
    this->owner->spendMana(this->spell->getCost());
    this->spell->action(enemy, static_cast<bool>(COMBAT_WIZ::WIZARD));
};
