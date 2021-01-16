#include "Identifiable.h"

Identifiable::Identifiable (const std::string& title): Countable(title) {
    std::cout << "Constructing Identifiable object" << std::endl;
    totalCount += 1;
    lastId += 1;
    this->id = lastId;
    this->title = title;
}

Identifiable::~Identifiable() {}

int Identifiable::lastId = 0;
