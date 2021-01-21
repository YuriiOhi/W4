compile:	
	g++ -std=c++11 units/Unit.cpp -c
	g++ -std=c++11 units/Soldier.cpp -c
	g++ -std=c++11 units/Rogue.cpp -c
	g++ -std=c++11 units/Berserker.cpp -c
	g++ -std=c++11 units/Vampire.cpp -c
	g++ -std=c++11 units/Werewolf.cpp -c
	g++ -std=c++11 units/Wolf.cpp -c

	g++ -std=c++11 states/BaseState.cpp -c
	g++ -std=c++11 states/BerserkerState.cpp -c
	g++ -std=c++11 states/MagicState.cpp -c
	g++ -std=c++11 states/VampireState.cpp -c
	g++ -std=c++11 states/WerewolfState.cpp -c
	g++ -std=c++11 states/WizardState.cpp -c
	g++ -std=c++11 states/WolfState.cpp -c

	g++ -std=c++11 spells/BaseSpell.cpp -c
	g++ -std=c++11 spells/Curse.cpp -c
	g++ -std=c++11 spells/FireBall.cpp -c
	g++ -std=c++11 spells/Heal.cpp -c
	g++ -std=c++11 spells/Motivate.cpp -c
	
	g++ -std=c++11 spellcasters/SpellCaster.cpp -c
	g++ -std=c++11 spellcasters/Wizard.cpp -c

	g++ -std=c++11 spellBook/SpellBook.cpp -c

	g++ -std=c++11 attacks/BaseAttack.cpp -c
	g++ -std=c++11 attacks/MagicAttack.cpp -c
	g++ -std=c++11 attacks/RogueAttack.cpp -c
	g++ -std=c++11 attacks/VampireAttack.cpp -c
	g++ -std=c++11 attacks/WerewolfAttack.cpp -c
	g++ -std=c++11 attacks/WizardAttack.cpp -c


all: compile
	g++ -std=c++11 run.cpp *.o

# CC=g++
# CFLAGS=-c -std=c++11

# SOURCES=$(shell find . -type f -name '*cpp' )
# OBJECTS=$(SOURCES:.cpp=.o)
# EXEC=a.out

# all: $(EXEC)

# $(EXEC): $(OBJECTS)
# 	$(CC) $(OBJECTS) -o $(EXEC) 

# %.o: %.cpp
# 	$(CC) $(CFLAGS) $< -o	$@

# clean:
# 	rm -fv $(OBJECTS)

# purge:
# 	find . -type f \( --name '*.o' -o -name '*out' \) -exec rm -fv {} /;
