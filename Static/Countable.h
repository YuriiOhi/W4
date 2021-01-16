#pragma once
#ifndef COUNTABLE_H
#define COUNTABLE_H

#include <iostream>

class Countable {
    private:
        std::string title;
    public:  
        static int totalCount;
    public:
        Countable(const std::string& title);
        ~Countable();
};

#endif // COUNTABLE_H