#include "BaseAttack.h"

BaseAttack::BaseAttack() {};
BaseAttack::~BaseAttack() {};

void BaseAttack::attack(Unit* attacker, Unit* enemy) {
	enemy->takePDamage(attacker->getState().getDmg());
	enemy->counterAttack(attacker);
};
void BaseAttack::counterAttack(Unit* attacker, Unit* enemy) {
	enemy->takePDamage(attacker->getState().getDmg() / static_cast<int>(DMG_COEF::FIVE));
};

void BaseAttack::convertOther(Unit* enemy){
	std::cout << "Dude I can't convert anyone..." << std::endl;
};

void BaseAttack::turnMyselfInto(Unit* self) {
	std::cout << "Dude I can't turn myself into anything..." << std::endl;
};