#pragma once
#ifndef IDENTIFIABLE_H
#define IDENTIFIABLE_H

#include <iostream>
#include "Countable.h"

class Identifiable: public Countable {
    private:
        int id;
        std::string title;
    public:
        static int lastId;
    public:
        Identifiable(const std::string& title);
        ~Identifiable();
};

#endif // IDENTIFIABLE_H