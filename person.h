#ifndef FILE_H
#define FILE_H
#include <iostream>
#include <string>
#include <fstream>
#include "LIST.h"
struct person{
     std::string name;
     int score;
};
class personManager{
    
    person PERSON;
    list<person> LIST;
    public:
    void loadFile(std::string name);
    void print();
    void insert(person newPerson);
    void searchAndRemove(person me);
};


#include "person.cpp"
#endif
