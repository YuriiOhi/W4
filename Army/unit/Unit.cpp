#include "Unit.h"

Unit::Unit(BaseState* uState, BaseAttack* uAttack) {
	this->uState = uState;
	this->uAttack = uAttack;
};

Unit::~Unit() {
	delete(this->uState);
	delete(this->uAttack);
};

BaseState& Unit::getState() const {
	return *(this->uState);
};


void Unit::attack(Unit* enemy) {
	if ( this->uState->isDead()) { return; }

	this->uAttack->attack(this, enemy);
	// enemy->takePDamage(this->uState->getDmg());
	// enemy->counterAttack(this);
};

void Unit::counterAttack(Unit* enemy) {
	if ( this->uState->isDead()) { return; }

	this->uAttack->counterAttack(this, enemy);
	//enemy->takePDamage(this->uState->getDmg() / 2);
};

void Unit::takePDamage(int dmg) {
	this->uState->takePDamage(dmg);
};

void Unit::takeMDamage(int dmg) {
	this->uState->takeMDamage(dmg);
};

std::ostream& operator<<(std::ostream& out, Unit& unit) {
	out << "Unit [ " << unit.getState() << " ]" << std::endl;

	return out;
};
