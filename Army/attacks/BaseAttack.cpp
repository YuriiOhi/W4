#include "BaseAttack.h"

BaseAttack::BaseAttack() {};
BaseAttack::~BaseAttack() {};

void BaseAttack::attack(Unit* attacker, Unit* enemy) {
	enemy->takePDamage(attacker->getState().getDmg());
	enemy->counterAttack(attacker);
};
void BaseAttack::counterAttack(Unit* attacker, Unit* enemy) {
	enemy->takePDamage(attacker->getState().getDmg() / 2);
};

std::ostream& operator<<(std::ostream& out, BaseAttack& attack) {
	return out;
};
