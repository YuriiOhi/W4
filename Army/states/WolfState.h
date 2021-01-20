#ifndef WOLF_STATE_H
#define WOLF_STATE_H

#include "BaseState.h"

class WolfState : public BaseState {
	public:
		WolfState(int hp, int dmg, const std::string& name);
		virtual ~WolfState();
};


#endif //WOLF_STATE_H
