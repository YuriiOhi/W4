#ifndef BASESTATE_H
#define BASESTATE_H

#include <iostream>

class BaseState {
	private:
		int hp;
		int maxHp;
		int damage;
		std::string* name;
	public:
		BaseState(int hp, int dmg, const std::string& name); 
		virtual ~BaseState();

		int getHp() const;
		int getMaxHp() const;
		int getDmg() const;
		std::string& getName() const;

		bool isDead();
		void checkState();

		void takePDamage(int dmg);
		void takeMDamage(int dmg);
};

std::ostream& operator<<(std::ostream& out, BaseState& state);

#endif // BASESTATE_H