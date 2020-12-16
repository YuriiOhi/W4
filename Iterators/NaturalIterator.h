#pragma once
#ifndef NATURAL_ITERATOR_H
#define NATURAL_ITERATOR_H

#include <iostream>

class NaturalIterator {
    private:
        int limit;
        int current;

    public:
        NaturalIterator(int limit);
        void next();
        void operator++();
        void operator++(int);
        bool over();
        int value();
        int operator*();
};

#endif // NATURAL_ITERATOR_H