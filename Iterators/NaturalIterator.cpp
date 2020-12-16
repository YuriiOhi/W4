#include "NaturalIterator.h"

NaturalIterator::NaturalIterator(int limit) : limit(limit), current(1) {}

void NaturalIterator::next() {
    if ( over() ) { // проверка чтобы не выскочить за границу
        return;
    }
    current += 1;
}

void NaturalIterator::operator++() { next(); }

void NaturalIterator::operator++(int) { operator++(); }

bool NaturalIterator::over() { return current > limit; }

int NaturalIterator::value() { return current; }

int NaturalIterator::operator*() { return value(); }

//#include <iostream>
// #include "NaturalIterator.h"

// using namespace std;

// int main() {
//     NaturalIterator seq(10);

//     for ( ; !seq.over(); seq++ ) {
//         cout << *seq << endl;
//     }

//     return 0;
// }