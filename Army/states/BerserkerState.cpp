#include "BerserkerState.h"

BerserkerState::BerserkerState(int hp, int dmg, const std::string& name) : BaseState(hp, dmg, name) {};
BerserkerState::~BerserkerState() {};

void BerserkerState::takeMDamage(int dmg) {
	return;
};
