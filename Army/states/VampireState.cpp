#include "VampireState.h"

VampireState::VampireState(int hp, int dmg, const std::string& name) : BaseState(hp, dmg, name) {
	this->becomeUnDead();
	this->becomeVampire();
};
VampireState::~VampireState() {};

void VampireState::heal(int healHP) {
	this->addHealthPoints(healHP);
};
