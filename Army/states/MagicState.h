#ifndef MAGIC_STATE_H
#define MAGIC_STATE_H

#include <iostream>
#include "BaseState.h"

class MagicState : virtual public BaseState {
    protected:
        int mana;
        int maxMana;

    public:
        MagicState(int hp, int dmg, int mana, const std::string& name);
        virtual ~MagicState();

        int getMana() const;
        int getMaxMana() const;

        void addMana(int extra);
        void spendMana(int cost);
};

std::ostream& operator<<(std::ostream& out, MagicState& magicState);

#endif // MAGIC_STATE_H
