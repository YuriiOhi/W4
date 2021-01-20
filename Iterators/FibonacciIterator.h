#pragma once
#ifndef FIBONACCI_ITERATOR_H
#define FIBONACCI_ITERATOR_H

#include <iostream>
#include <vector>

class OutOfRangeException {};

template <class T>
class FibonacciIterator {
    private:
        std::vector<T>* fibSequence;
        T limit;
        T currentNumber;
        T previousNumber;
        T fibonacci;
        int index;
        bool negaFibonacci;
        bool isOver;
        bool isFull;

        void calculateFibonacci() {
            fibonacci = currentNumber + previousNumber;
            previousNumber = currentNumber;
            currentNumber = fibonacci;
            fibSequence->push_back(fibonacci);
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
        bool begin();
        bool over();
        T value();
        T operator*();
};

#endif // FIBONACCI_ITERATOR_H