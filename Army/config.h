#ifndef CONFIG_H
#define CONFIG_H

enum class COMBAT_WIZ {
	WIZARD = true,
	HEALER = false,
	PRIEST = false,
	WARLOCK = true,
	NECROMANCER = true
};


enum class HP {
	SOLDIER = 100,
	ROGUE = 85,
	BERSERKER = 125,
	VAMPIRE = 110,
	WEREWOLF = 100,
	WOLF = 150,
	WIZARD = 100,
	HEALER = 100,
	PRIEST = 120,
	WARLOCK = 90,
	NECROMANCER = 100,
	DEMON = 110
};

enum class DMG {
	SOLDIER = 25,
	ROGUE = 30,
	BERSERKER = 45,
	VAMPIRE = 40,
	WEREWOLF = 25,
	WOLF = 10,
	WIZARD = 5,
	HEALER = 7,
	PRIEST = 7,
	WARLOCK = 10,
	NECROMANCER = 10,
	DEMON = 15
};

enum class M_DMG {
	ZERO = 0,
	WIZARD = 25,
	HEALER = 12,
	PRIEST = 12,
	WARLOCK = 20,
	NECROMANCER = 12
};

enum class DMG_COEF {
	TWO = 2,
	FIVE = 5,
	TEN = 10
};

enum class MNA_LV {
	LOW = 60,
	MIDDLE = 90,
	HIGH = 150
};

enum class NUM {
	TEN = 10,
	TWENTY = 20,
	THIRTY = 30
};


#endif //CONFIG_H
