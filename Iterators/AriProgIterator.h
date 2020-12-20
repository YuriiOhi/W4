#pragma once
#ifndef ARI_PROG_ITERATOR_H
#define ARI_PROG_ITERATOR_H

#include <iostream>

class OutOfRangeException {};

template <class T>
class AriProgIterator {
    private:
        T member;
        T step;
        T length;
        T current;  
        int index;

    public:
        AriProgIterator( T member, T step, T length);
        ~AriProgIterator();
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

#endif // ARI_PROG__ITERATOR_H