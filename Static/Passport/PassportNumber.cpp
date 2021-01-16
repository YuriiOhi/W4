//
//  PassportNumber.cpp
//  PassportTest
//
//  Created by Yurii on 2021/1/8.
//

#include "PassportNumber.h"
#include "Date.h"

using namespace std;

#define INITIAL_LETTER 'A'
#define LAST_LETTER 'Z'
#define INITIAL_SEQ 100000
#define LAST_SEQ 999999

char PassportNumber::firstLetter = INITIAL_LETTER;
char PassportNumber::secondLetter = INITIAL_LETTER;
int PassportNumber::id = INITIAL_SEQ;

PassportNumber::PassportNumber() {
    this->firstSequenceLetter = firstLetter;
    this->secondSequenceLetter = secondLetter;
    this->numberSequence = id;
}

PassportNumber::~PassportNumber() {
    std::cout << "PassportNumber destructed" << std::endl;
}

void PassportNumber::setPassportSeries(char firstL, char secondL, int numSeq) {
    if ( firstL < INITIAL_LETTER || firstL > LAST_LETTER || secondL < INITIAL_LETTER || secondL > LAST_LETTER || numSeq < INITIAL_SEQ || numSeq > LAST_SEQ ) {
        cout << "Your data is invalid!" << endl;
        return;
    }
    firstLetter = firstL;
    secondLetter = secondL;
    id = numSeq;
}

void PassportNumber::generatePassportNumber() {
    id += 1;
    if ( id > LAST_SEQ ) {
        id = INITIAL_SEQ;
        secondLetter += 1;
    }
    if ( firstLetter == LAST_LETTER && secondLetter > LAST_LETTER ) {
        firstLetter = INITIAL_LETTER;
        secondLetter = INITIAL_LETTER;
        id = INITIAL_SEQ;
        return;
    }
    if ( secondLetter > LAST_LETTER ) {
        firstLetter += 1;
        secondLetter = INITIAL_LETTER;
    }
}

std::ostream& operator<<(std::ostream& out, const PassportNumber& passportNumber) {
    out << passportNumber.firstLetter  << passportNumber.secondLetter << " " << passportNumber.id << std::endl;
    return out;
}
