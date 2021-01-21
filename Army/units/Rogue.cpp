#include "Rogue.h"

Rogue::Rogue(const std::string& name) 
	: Unit(new BaseState(static_cast<int>(HP::ROGUE),
						 static_cast<int>(DMG::ROGUE),
						 name),
		   new RogueAttack()) {
};
Rogue::~Rogue() {}	

std::ostream& operator<<(std::ostream& out, Rogue& rogue) {
	out << "Rogue [" << rogue.getState() << "]";
	return out;
}	
