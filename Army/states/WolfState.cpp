#include "WolfState.h"

WolfState::WolfState(int hp, int dmg, const std::string& name) : BaseState(hp, dmg, name) {
	this->becomeWerewolf();
};

WolfState::~WolfState() {};
