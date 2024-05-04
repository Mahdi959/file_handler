#include "person.h"

int main(){
    personManager Person;
    person me;
    std::string fileName;
    std::cout<<"Enter file name: ";
    std::cin>>fileName;
    
    Person.loadFile(fileName);
    Person.print();
   // File.add();
    std::cin>>me.name>>me.score;
    Person.searchAndRemove(me);
    Person.print();
    std::cin>>me.name>>me.score;
    Person.insert(me);
    Person.print();
     std::cin>>me.name>>me.score;
    Person.searchAndRemove(me);
    Person.print();
}