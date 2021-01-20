#include "Wolf.h"

Wolf::Wolf(const std::string& name) 
    : Unit(new WolfState(static_cast<int>(HP::WOLF),
				        static_cast<int>(DMG::WOLF),
				        name),
	       new BaseAttack()) {};
Wolf::~Wolf() {};

std::ostream& operator<<(std::ostream& out, Wolf& wolf) {
	out << "Wolf [" << wolf.getState() << "]";
	return out;
};	
