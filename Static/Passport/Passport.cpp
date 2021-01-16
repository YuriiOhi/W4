//
//  Passport.cpp
//  PassportTest
//
//  Created by Yurii on 2021/1/8.
//
#include "Passport.h"
std::set<Passport*> Passport::passports;

Passport::Passport(const char* name, const char* surname, int day, int month, int year) {
    this->birthDate = Date(day,month,year);
    this->name = name;
    this->surname = surname;
    this->passNumber.generatePassportNumber();
    passports.insert(this);
   
}
Passport::~Passport() {
    std::cout << "Passport destructed" << std::endl;
    passports.erase(this);

}
const char*  Passport::getName() const {
    return this->name;
}
const char* Passport::getSurname() const {
    return this->surname;
}

const Date& Passport::getDate() const {
    return this->birthDate;
}

const PassportNumber& Passport::getPassportNumber() const{
    return this->passNumber;
}

std::ostream& operator<<(std::ostream& out, const Passport& object) {
    out << object.getName() << " "<< object.getSurname() << std::endl;
    out << object.getDate();
    out << object.getPassportNumber() << std::endl;  

    return out;
}
