#ifndef ROGUE_H
#define ROGUE_H

#include <iostream>
#include "Unit.h"
#include "../attacks/RogueAttack.h"

class Rogue : public Unit {
public:
	Rogue(const std::string& name);
	virtual ~Rogue(); 	
};

std::ostream& operator<<(std::ostream& out, Rogue& rogue);	

#endif // ROGUE_H
