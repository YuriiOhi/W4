#include "MagicState.h"

MagicState::MagicState(int hp, int dmg, int mana, const std::string& name) :  mana(mana), maxMana(mana), BaseState(hp, dmg, name) {};

MagicState::~MagicState() {};

int MagicState::getMana() const {
    return this->mana;
};

int MagicState::getMaxMana() const {
    return this->maxMana;
};


void MagicState::addMana(int extra) {
    int total = this->mana + extra;
    if ( total > this->maxMana ) {
        this->mana = this->maxMana;
        return;
    }
    this->mana = total;
};

void MagicState::spendMana(int cost) {
    if ( cost > this->mana ) {
        std::cout << "NO MANA = NO HONEY";
    }

    this->mana -= cost;
};



std::ostream& operator<<(std::ostream& out, MagicState& state) {
    out << state.getName();
    out << ", hp: " << state.getHp() << "/" << state.getMaxHp();
    out << ", dmg: " << state.getDmg();
    out << ", mana: " << state.getMana();
    out << ", isUnDead: " << state.getIsUnDead(); 
 
    return out;
};