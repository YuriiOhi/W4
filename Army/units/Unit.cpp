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

BaseAttack& Unit::getAttack() const {
	return *(this->uAttack);
};

void Unit::ensureIsAlive() {
	if ( this->uState->isDead()) { return; }
}

void Unit::attack(Unit* enemy) {
	this->ensureIsAlive();
	
	this->uAttack->attack(this, enemy);
};

void Unit::counterAttack(Unit* enemy) {
	this->ensureIsAlive();

	this->uAttack->counterAttack(this, enemy);
};

void Unit::convertOther(Unit* enemy) {
	this->ensureIsAlive();

	this->uAttack->convertOther(enemy);
};

void Unit::turnMyselfInto() {
	this->ensureIsAlive();

	this->uAttack->turnMyselfInto(this);
};

void Unit::changeState(BaseState* newState, BaseAttack* newAttack) {
	this->ensureIsAlive();

	std::cout << "I am " << this->getState() << " before changing my state " << " ]" << std::endl;

	delete(this->uState);
	this->uState = newState;
	
	delete(this->uAttack);
 	this->uAttack = newAttack;
	std::cout << "I am " << this->getState() << " after changing my state " << " ]" << std::endl;

};

void Unit::takePDamage(int dmg) {
	this->uState->takePDamage(dmg);
};

void Unit::takeMDamage(int dmg) {
	this->uState->takeMDamage(dmg);
};

void Unit::addHP(int hp) {
	this->ensureIsAlive();
	
	this->uState->addHealthPoints(hp);
};


std::ostream& operator<<(std::ostream& out, Unit& unit) {
	out << "Unit [ " << unit.getState() << " ]" << std::endl;

	return out;
};
