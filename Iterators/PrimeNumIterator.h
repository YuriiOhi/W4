#pragma once
#ifndef PRIME_NUM_ITERATOR_H
#define PRIME_NUM_ITERATOR_H

#include <iostream>
#include <vector>

class OutOfRangeException {};

template <class T>
class PrimeNumIterator {
    private:
        std::vector<T>* primeNumbers;
        T limit;
        T currentPrimeNumber;
        int index;
        int currentHighest;

        void addPrimeNumber() {
            primeNumbers->push_back(prime(currentPrimeNumber));
        }

    public:
        PrimeNumIterator(const T limit);
        ~PrimeNumIterator();
        void reloadIterator();
        void previous();
        void next();
        void printSize();
        void operator++();
        void operator++(int);
        void operator--();
        void operator--(int);
        bool isPrime(const T number);
        bool over();
        T prime(const T sequenceNumber);
        T value();
        T operator*();
};

#endif // PRIME_NUM_ITERATOR_H