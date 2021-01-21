#ifndef BASESTATE_H
#define BASESTATE_H

#include <iostream>
#include "../config.h"

class BaseState {
	private:
		int hp;
		int maxHp;
		int damage;
		std::string* name;
		bool isUndead;
		bool isWereWolf;
		bool isVampire;

	public:
		BaseState(int hp, int dmg, const std::string& name); 
		virtual ~BaseState();

		int getHp() const;
		int getMaxHp() const;
		int getDmg() const;
		std::string& getName() const;

		bool getIsUnDead() const;
		bool getIsWereWolf() const;
		bool getIsVampire() const;
		bool isDead();

		void becomeUnDead();
		void becomeWerewolf();
		void becomeVampire();

		void checkState();
		void addHealthPoints(int hp);

		void takePDamage(int dmg);
		void takeMDamage(int dmg);
};

std::ostream& operator<<(std::ostream& out, BaseState& state);

#endif // BASESTATE_H
