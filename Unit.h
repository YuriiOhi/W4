#ifndef UNIT_H
#define UNIT_H

#include <iostream>

class Unit {
	private:
		int hp;
		int maxHp;
		int damage;
		std::string* name;
	public:
		Unit(int hp, int dmg, const std::string& name);
		virtual ~Unit();

		int getHp() const;
		int getMaxHp() const;
		int getDmg() const;
		std::string& getName() const;

		void attack(Unit* enemy);
		void counterAttack(Unit* enemy);

		void takePDamage(int dmg);
		void takeMDamage(int dmg);
};

std::ostream& operator<<(std::ostream& out, Unit& unit);	

#endif // UNIT_H