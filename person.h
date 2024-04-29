#ifndef FILE_H
#define FILE_H
#include <iostream>
#include <string>
#include <fstream>
#include "LIST.h"

class personManager{
    struct person{
     std::string name;
     int score;
};
    person PERSON;
    list<person> LIST;
    public:
    void loadFile(std::string name);
    void print();
    void insert();

};


#include "person.cpp"
#endif
