#include <iostream>
#include "units/Soldier.h"
#include "units/Rogue.h"
#include "units/Berserker.h"
#include "units/Vampire.h"
#include "units/Werewolf.h"
#include "units/Wolf.h"

int main() {

	Soldier* s1 = new Soldier("Goga");
	Rogue* r2 = new Rogue("Spiridon");
	Berserker* b3 = new Berserker("Canton");
	Vampire* v4 = new Vampire("John");
	Werewolf* w5 = new Werewolf("Bill");
	Rogue* r6 = new Rogue("Spiridon's Brother");


	std::cout << *s1 << std::endl;
	std::cout << *r2 << std::endl;
	std::cout << *b3 << std::endl;
	std::cout << *v4 << std::endl;
	std::cout << *w5 << std::endl;
	std::cout << *r6 << std::endl;


	std::cout << "---------------- before first attack" << std::endl;

	s1->attack(r2);
	r2->attack(s1);
	b3->attack(r2);
	b3->attack(v4);
	r2->attack(v4);
	w5->attack(v4);

	std::cout << *s1 << std::endl;
	std::cout << *r2 << std::endl;
	std::cout << *b3 << std::endl;
	std::cout << *v4 << std::endl;
	std::cout << *w5 << std::endl;
	std::cout << *r6 << std::endl;



	std::cout << "---------------- before vampire attack" << std::endl;

	v4->attack(s1);
	v4->attack(s1);
	v4->attack(s1);
	v4->convertOther(w5);

	std::cout << *s1 << std::endl;
	std::cout << *r2 << std::endl;
	std::cout << *b3 << std::endl;
	std::cout << *v4 << std::endl;
	std::cout << *w5 << std::endl;
	std::cout << *r6 << std::endl;


	std::cout << "----------------after vampire attack" << std::endl;
	
	v4->convertOther(s1);
	v4->convertOther(r2);
	v4->convertOther(b3);

	std::cout << *s1 << std::endl;
	std::cout << *r2 << std::endl;
	std::cout << *b3 << std::endl;
	std::cout << *v4 << std::endl;
	std::cout << *w5 << std::endl;
	std::cout << *r6 << std::endl;


	std::cout << "----------------after infection" << std::endl;

	v4->attack(s1);
	v4->attack(r2);
	v4->attack(b3);
	v4->attack(b3);
	v4->attack(b3);
	v4->attack(b3);
	v4->attack(b3);
	r2->convertOther(v4);
	r2->convertOther(r6);

	std::cout << "----------------after vampire attack" << std::endl;

	std::cout << *s1 << std::endl;
	std::cout << *r2 << std::endl;
	std::cout << *b3 << std::endl;
	std::cout << *v4 << std::endl;
	std::cout << *w5 << std::endl;
	std::cout << *r6 << std::endl;


	delete(s1);
	delete(r2);
	delete(b3);
	delete(v4);
	delete(w5);
	delete(r6);


	return 0;
}
