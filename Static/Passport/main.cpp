//
//  main.cpp
//  PassportTest
//
//  Created by Yurii on 2021/1/7.
//
#include <iostream>
#include "Date.h"
#include "PassportNumber.h"
#include "Passport.h"

int main() {
    Passport my1("Yura", "Iria", 1, 7, 1987);
    std::cout << my1 << std::endl;
    // try {
    //     Passport my2("Yura", "Iria", 112, 7, 1987);
    //     std::cout << my2 << std::endl;
    // } catch ( InvalidDate e) {}
    
    Passport my3("Yura", "Iria", 1, 7, 1987);
    std::cout << my3 << std::endl;
    PassportNumber::setPassportSeries('F', 'F', 999333);
    Passport my4("Tom", "Iria", 1, 7, 1987);
    std::cout << my4 << std::endl;
    Passport my5("Bill", "Iria", 12, 7, 1987);
    std::cout << my5 << std::endl;
    Passport my6("Jack", "Iria", 1, 7, 1987);
    std::cout << my6 << std::endl;
    
    return 0;
}
