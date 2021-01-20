#include "Werewolf.h"

Werewolf::Werewolf(const std::string& name) 
	: Unit(new WerewolfState(static_cast<int>(HP::WEREWOLF),
							 static_cast<int>(DMG::WEREWOLF),
							 name),
	 	   new WerewolfAttack()) {};

Werewolf::~Werewolf() {};

void Werewolf::convertOther(Unit* enemy) {
	if ( this->uState->isDead()) { return; }
	if ( enemy->getState().getIsUnDead() ) { return; }

	this->uAttack->convertOther(enemy);
};

void Werewolf::turnMyselfInto() {
	if ( this->uState->isDead()) { return; }

	this->uAttack->turnMyselfInto(this);
};


std::ostream& operator<<(std::ostream& out, Werewolf& werewolf) {
	out << "Werewolf [" << werewolf.getState() << "]";
	return out;
};	
