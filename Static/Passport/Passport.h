//
//  Passport.h
//  PassportTest
//
//  Created by Yurii on 2021/1/8.
//
#pragma once
#ifndef Passport_h
#define Passport_h

#include "Date.h"
#include "PassportNumber.h"

class Passport {
    private:
        const char* name;
        const char*surname;
        Date birthDate;
        PassportNumber passNumber;
    public:
    	static std::set<Passport*> passports;
   	public:
        Passport(const char* name, const char* surname, int day, int month, int year);
        ~Passport();
        void printPassport();
        const  char* getName() const;
       	const  char* getSurname() const;
      	const Date& getDate() const;
       	const PassportNumber& getPassportNumber() const;

};
std::ostream& operator<<(std::ostream& out, const Passport& object);

#endif /* Passport_h */
