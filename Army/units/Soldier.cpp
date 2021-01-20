#include "Soldier.h"

Soldier::Soldier(const std::string& name) 
	: Unit(new BaseState(static_cast<int>(HP::SOLDIER),
						 static_cast<int>(DMG::SOLDIER),
						 name),
	 	   new BaseAttack()) {};

Soldier::~Soldier() {};

std::ostream& operator<<(std::ostream& out, Soldier& soldier) {
	out << "Soldier [" << soldier.getState() << "]";
	return out;
}	
