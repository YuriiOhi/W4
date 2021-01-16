//
//  PassportNumber.h
//  PassportTest
//
//  Created by Yurii on 2021/1/8.
//
#include <iostream>
#include <set>

#ifndef PassportNumber_h
#define PassportNumber_h

class PassportNumber {
    private:
        char firstSequenceLetter;
        char secondSequenceLetter;
        int numberSequence;
    public:
        static char firstLetter;;
        static char secondLetter;
        static int id;
        static void generatePassportNumber();
        static void setPassportSeries(char firstLetter, char secondLetter, int id);
    public:
    PassportNumber();
    ~PassportNumber();
};

std::ostream& operator<<(std::ostream& out, const PassportNumber& passportNumber);
#endif /* PassportNumber_h */
