#ifndef BERSERKER_STATE_H
#define BERSERKER_STATE_H

#include "BaseState.h"

class BerserkerState : public BaseState {
	public:
		BerserkerState(int hp, int dmg, const std::string& name); 
		virtual ~BerserkerState();

		virtual void takeMDamage(int dmg);
};


#endif // BERSERKER_STATE_H
