#include <iostream>
#include "Unit.h"
#include "BaseAttack.h"


int main() {
	BaseState* b1 = new BaseState(100, 25, "Goga");
	BaseState* b2 = new BaseState(100, 25, "Spiridon");
	BaseAttack* a1 = new BaseAttack();
	BaseAttack* a2 = new BaseAttack();


	Unit* u1 = new Unit(b1, a1);
	Unit* u2 = new Unit(b2, a2);

	std::cout << *u1 << std::endl;
	std::cout << *u2 << std::endl;
	
	std::cout << "----------------" << std::endl;

	u1->attack(u2);
    u1->attack(u2);
    u1->attack(u2);
    u1->attack(u2);
    u1->attack(u2);
    u1->attack(u2);
     
 	std::cout << *u1 << std::endl;
	std::cout << *u2 << std::endl;

	return 0;
}
