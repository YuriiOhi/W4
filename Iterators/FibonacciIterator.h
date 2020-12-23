#pragma once
#ifndef FIBONACCI_ITERATOR_H
#define FIBONACCI_ITERATOR_H

#include <iostream>

class OutOfRangeException {};

template <class T>
class FibonacciIterator {
    private:
        T* array;
        T limit;
        T currentNumber;
        T previousNumber;
        T fibonacci;
        int index;
        bool negaFibonacci;

        T calculateFibonacci() {
            fibonacci = currentNumber + previousNumber;
            previousNumber = currentNumber;
            currentNumber = fibonacci;
            return fibonacci;
        }

    public:
        FibonacciIterator(T limit);
        ~FibonacciIterator();
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

#endif // FIBONACCI_ITERATOR_H