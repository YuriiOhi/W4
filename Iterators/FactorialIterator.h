#pragma once
#ifndef FACTORIAL_ITERATOR_H
#define FACTORIAL_ITERATOR_H

#include <iostream>
#include <cmath>

class OutOfRangeException {};

template <class T>
class FactorialIterator {
    private:
        T initial;
        T number;
        T limit;
        T factorial;

        void calculateFactorial() {
            factorial *= number;
        }

    public:
        FactorialIterator(T number, T limit);
        ~FactorialIterator();
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

#endif // FACTORIAL_ITERATOR_H