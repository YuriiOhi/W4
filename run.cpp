#include <iostream>
#include "Unit.h"

int main() {
	Unit* u1 = new Unit(100, 25, "Goga");
	Unit* u2 = new Unit(100, 25, "Spiridon");

	std::cout << *u1 << std::endl;
	std::cout << *u2 << std::endl;
	
	std::cout << "----------------" << std::endl;

	u1->attack(u2);
 	u1->attack(u2);
 	u1->attack(u2);
 	u1->attack(u2);
 	u1->attack(u2);
 	
 	std::cout << *u1 << std::endl;
	std::cout << *u2 << std::endl;


	return 0;
}