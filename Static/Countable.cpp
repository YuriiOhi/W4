#include "Countable.h"

Countable::Countable(const std::string& title) {
	std::cout << "Constructing Countable objec" << std::endl;
    totalCount += 1; 
    this->title = title;
}
Countable::~Countable() {}

int Countable::totalCount = 0;
