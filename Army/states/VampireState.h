#ifndef VAMPIRE_STATE_H
#define VAMPIRE_STATE_H

#include "BaseState.h"

class VampireState : public BaseState {		
	public:
		VampireState(int hp, int dmg, const std::string& name);
		virtual ~VampireState();

		void heal(int healHP);
};


#endif //VAMPIRE_STATE_H
