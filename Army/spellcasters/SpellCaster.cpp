#include "SpellCaster.h"
#include "../config.h"
#include "../states/MagicState.h"
#include "../attacks/MagicAttack.h"

SpellCaster::SpellCaster(MagicState* magicState, MagicAttack* magicAttack)
    : Unit(new BaseState(this->getState().getHp(),
                          this->getState().getDmg(),
                          this->getState().getName()),
            new BaseAttack()) {
    this->magicState = magicState;
    this->magicAttack = magicAttack;
};

SpellCaster::~SpellCaster() {
    delete(this->magicState);
    delete(this->magicAttack);
};

MagicState& SpellCaster::getMagState() const {
    return *(this->magicState);
};

MagicAttack& SpellCaster::getMagAttack() const {
    return *(this->magicAttack);
};

int SpellCaster::getMana() const {
    return this->magicState->getMana();
};

int SpellCaster::getMaxMana() const {
    return this->magicState->getMaxMana();
};

void SpellCaster::addMana(int extra) {
    this->magicState->addMana(extra);
};

void SpellCaster::spendMana(int cost) {
    this->magicState->spendMana(cost);
};

void SpellCaster::changeSpell(BaseSpell* newSpell) {
    this->magicAttack->changeSpell(newSpell);
};

void SpellCaster::cast(Unit* enemy) {
    this->magicAttack->cast(enemy);
};

std::ostream& operator<<(std::ostream& out, SpellCaster& spellCaster) {
    out << "SpellCaster [" << spellCaster.getMagState() << "]";
    
    return out;
}   