CXX = g++
CXXFLAGS = -std=c++11 
#CXXFLAGS += -Wall -Wextra -pedantic -g #Optional debug flags.
OBJECTS = fantasyMain.o \
	inputValidation.o \
	Character.o \
	Barbarian.o \
	BlueMen.o \
	HarryPotter.o \
	Medusa.o \
	Vampire.o \
	fantasyMenu.o \

fantasyMain: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o fantasyMain $(OBJECTS)

fantasyMain.o: fantasyMain.cpp
	$(CXX) $(CXXFLAGS) -c fantasyMain.cpp

inputValidation.o: inputValidation.cpp inputValidation.hpp
	$(CXX) $(CXXFLAGS) -c inputValidation.cpp

Character.o: Character.cpp Character.hpp
	$(CXX) $(CXXFLAGS) -c Character.cpp

Barbarian.o: Barbarian.cpp Barbarian.hpp
	$(CXX) $(CXXFLAGS) -c Barbarian.cpp

BlueMen.o: BlueMen.cpp BlueMen.hpp
	$(CXX) $(CXXFLAGS) -c BlueMen.cpp

HarryPotter.o: HarryPotter.cpp HarryPotter.hpp
	$(CXX) $(CXXFLAGS) -c HarryPotter.cpp

Medusa.o: Medusa.cpp Medusa.hpp
	$(CXX) $(CXXFLAGS) -c Medusa.cpp

Vampire.o: Vampire.cpp Vampire.hpp
	$(CXX) $(CXXFLAGS) -c Vampire.cpp

fantasyMenu.o: fantasyMenu.cpp fantasyMenu.hpp
	$(CXX) $(CXXFLAGS) -c fantasyMenu.cpp

clean: 
	clear
	rm fantasyMain
	rm *.o
	ls

status:
	clear
	ls
