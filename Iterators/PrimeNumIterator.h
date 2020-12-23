#pragma once
#ifndef PRIME_NUM_ITERATOR_H
#define PRIME_NUM_ITERATOR_H

#include <iostream>

class OutOfRangeException {};

template <class T>
class PrimeNumIterator {
    private:
        T* arrayPrime;
        T limit;
        int index;

    public:
        PrimeNumIterator(T limit);
        ~PrimeNumIterator();
        void reloadIterator();
        void previous();
        void next();
        void operator++();
        void operator++(int);
        void operator--();
        void operator--(int);
        bool over();
        T value();
        T operator*();
};

#endif // PRIME_NUM_ITERATOR_H