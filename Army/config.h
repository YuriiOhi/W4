#ifndef CONFIG_H
#define CONFIG_H

enum class HP {
	SOLDIER = 100,
	ROGUE = 85,
	BERSERKER = 125,
	VAMPIRE = 110,
	WEREWOLF = 100,
	WOLF = 150
};

enum class DMG {
	SOLDIER = 25,
	ROGUE = 30,
	BERSERKER = 45,
	VAMPIRE = 40,
	WEREWOLF = 25,
	WOLF = 10

};

enum class M_DMG {
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

#endif //CONFIG_H
