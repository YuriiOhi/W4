#pragma once
#ifndef ARRAY_ITERATOR_H
#define ARRAY_ITERATOR_H

#include <iostream>
#include <string>

class BelowZeroException {};
class OutOfRangeException {};

template <class T>
class ArrayIterator {
    private:
    	T *array;
        int size;
        int current;

    public:
        ArrayIterator(T source[], int size);
        ~ArrayIterator();
        void reloadIterator();
        void jumpTo(int element);
        void previous();
        void next();
        void operator++();
        void operator++(int);
        void operator--();
        void operator--(int);
        bool over();
        int getValueOf(int element);
        int value();
        int operator*();
};

#endif // ARRAY_ITERATOR_H