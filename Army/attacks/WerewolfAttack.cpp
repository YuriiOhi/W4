#include "WerewolfAttack.h"
#include "../states/WerewolfState.h"

WerewolfAttack::WerewolfAttack() {};
WerewolfAttack::~WerewolfAttack() {};

void WerewolfAttack::convertOther(Unit* enemy) {
	std::cout << "MAKING ENEMY A WEREWOLF!" << std::endl;
	enemy->changeState(new WerewolfState(enemy->getState().getMaxHp(),
					  					 enemy->getState().getDmg(),
					  					 enemy->getState().getName()),
					   new WerewolfAttack());											
};


void WerewolfAttack::turnMyselfInto(Unit* self) {
	self->changeState(new WolfState(static_cast<int>(HP::WOLF),
									static_cast<int>(DMG::WOLF),
									self->getState().getName()), 
					  new BaseAttack());
};
