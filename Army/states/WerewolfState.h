#ifndef WEREWOLF_STATE_H
#define WEREWOLF_STATE_H

#include "BaseState.h"
#include "WolfState.h"

class WerewolfState : public BaseState {
	public:
		WerewolfState(int hp, int dmg, const std::string& name);
		virtual ~WerewolfState();
};


#endif //WEREWOLF_STATE_H
