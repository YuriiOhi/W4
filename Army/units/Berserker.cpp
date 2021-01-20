#include "Berserker.h"

Berserker::Berserker(const std::string& name) 
	: Unit(new BerserkerState(static_cast<int>(HP::BERSERKER),
							  static_cast<int>(DMG::BERSERKER),
						      name),
		   new BaseAttack()) {};
Berserker::~Berserker() {}	

std::ostream& operator<<(std::ostream& out, Berserker& berserker) {
	out << "Berkserker [" << berserker.getState() << "]";
	return out;
}	
