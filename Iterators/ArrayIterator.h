#pragma once
#ifndef ARRAY_ITERATOR_H
#define ARRAY_ITERATOR_H

#include <iostream>
#include <string>

class OutOfRangeException {};

template <class T>
class ArrayIterator {
    private:
    	const T *array;
        T currentValue;
        int size;
        int index;
        int last;
        
        void updateValue() {
            currentValue = array[index];
        }

    public:
        ArrayIterator(const T* sourceArray, int size);
        ~ArrayIterator();
        void reloadIterator();
        void previous();
        void next();
        void operator++();
        void operator++(int);
        void operator--();
        void operator--(int);
        bool over();
        int value();
        int operator*();
        int getIndex();
};

#endif // ARRAY_ITERATOR_H