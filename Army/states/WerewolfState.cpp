#include "WerewolfState.h"

WerewolfState::WerewolfState(int hp, int dmg, const std::string& name) : BaseState(hp, dmg, name) {
	this->becomeWerewolf();
};

WerewolfState::~WerewolfState() {};