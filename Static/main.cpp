#include <iostream>
#include "Mohican.h"

int main() {
    Mohican::initMohicanTribe();
    Mohican* blackWidow = new Mohican("Black Widow");
    Mohican* thor = new Mohican("Thor");
    Mohican* tonyStark = new Mohican("Tony Stark");
    
    delete blackWidow;
    delete thor;
    delete tonyStark;
    Mohican::deInitMohicanTribe();
    
    return 0;
}

