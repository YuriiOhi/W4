#include "Vampire.h"

Vampire::Vampire(const std::string& name) 
	: Unit(new VampireState(static_cast<int>(HP::VAMPIRE),
							static_cast<int>(DMG::VAMPIRE),
							name),
	 	   new VampireAttack()) {};

Vampire::~Vampire() {};

void Vampire::convertOther(Unit* enemy) {
	this->ensureIsAlive();
	enemy->ensureIsAlive();

	if ( enemy->getState().getIsWereWolf() ) { return; }

	this->uAttack->convertOther(enemy);
};

std::ostream& operator<<(std::ostream& out, Vampire& vampire) {
	out << "Vampire [" << vampire.getState() << "]";
	return out;
};	
