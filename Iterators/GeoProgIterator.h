#pragma once
#ifndef GEO_PROG_ITERATOR_H
#define GEO_PROG_ITERATOR_H

#include <iostream>
#include <cmath>


class OutOfSequenceRangeException {};

template <class T>
class GeoProgIterator {
    private:
        T first;
        T ratio;
        T length;
        T current;
        int power;
        int index;

        void updateCurrent() {
            current = first * pow(ratio, power);
        }

    public:
        GeoProgIterator( T first, T ratio, T length);
        ~GeoProgIterator();
        void reloadIterator();
        void previous();
        void next();
        void operator++();
        void operator++(int);
        void operator--();
        void operator--(int);
        bool over();
        int value();
        int getIndex();
        int operator*();
};

#endif // GEO_PROG__ITERATOR_H