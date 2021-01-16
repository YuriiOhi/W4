#include "Mohican.h"

int Mohican::totalCount = 0;
int Mohican::lastId = 0;
list<Mohican*>*Mohican::tribe = nullptr;
void Mohican::removeMohican(Mohican* mohican) {
    tribe->remove(mohican);
    totalCount -= 1;
}

Mohican::Mohican(string title) {
    if (tribe) {
        lastId += 1;
        totalCount += 1;
        this->title = title;
        this->id = lastId;
        tribe->push_back(this);
    } else {
        throw NoContainerException();
    }
}

Mohican::~Mohican() {
    std::cout << "destructor" << std::endl;
    tribe->remove(this);
    totalCount -= 1;
}
void Mohican::initMohicanTribe() {
    if (!tribe) {
        tribe = new std::list<Mohican*>();
    }
}
void Mohican::deInitMohicanTribe() {
    if (tribe) {
        tribe->clear();
        delete tribe;
    }
}
Mohican::Mohican(const Mohican& copy) {
	totalCount += 1;
    lastId += 1;
    this->id = lastId;
    this->title = copy.title;
}

Mohican& Mohican::operator=(const Mohican& copy) {
    totalCount += 1;
    lastId += 1;
	this->id = lastId;
    this->title = copy.title;
    return *this;
}

int Mohican::getId() const { 
	return id; 
}

string Mohican::getTitle() const { 
	return title; 
}


Mohican& Mohican::getLastMohican() {
    return *tribe->back();
}

ostream& operator<<(ostream& out, const Mohican& object) {
    out << "Object's ID = " << object.getId() << ", title = " << object.getTitle() << ".";
    
    return out;
}
