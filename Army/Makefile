# compile:	
# 	g++ -std=c++11 units/Unit.cpp -c
# 	g++ -std=c++11 units/Soldier.cpp -c
# 	g++ -std=c++11 units/Rogue.cpp -c
# 	g++ -std=c++11 states/BaseState.cpp -c
# 	g++ -std=c++11 attacks/BaseAttack.cpp -c
# 	g++ -std=c++11 attacks/RogueAttack.cpp -c

# all: compile
# 	g++ -std=c++11 run.cpp *.o

CC=g++
CFLAGS=-c -std=c++11

SOURCES=$(shell find . -type f -name '*cpp' )
OBJECTS=$(SOURCES:.cpp=.o)
EXEC=a.out

all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC) 

%.o: %.cpp
	$(CC) $(CFLAGS) $< -o	$@

clean:
	rm -fv $(OBJECTS)

purge:
	find . -type f \( --name '*.o' -o -name '*out' \) -exec rm -fv {} /;
