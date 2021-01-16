#ifndef MOHICAN_H
#define MOHICAN_H

#include <iostream>
#include <list>

using namespace std;
class NoContainerException {};

class Mohican {
private:
    int id;
    string title;
public:
    static int totalCount;
    static int lastId;
    static list<Mohican*>* tribe;
    static Mohican& getLastMohican();
    static void removeMohican(Mohican* mohican);
    static void initMohicanTribe();
    static void deInitMohicanTribe();

public:
    Mohican(string title);
    ~Mohican();
    Mohican(const Mohican& copy);
    Mohican& operator=(const Mohican& copy);
    int getId() const;
    string getTitle() const;
};

ostream& operator<<(ostream& out, const Mohican& object);

#endif // MOHICAN_H
