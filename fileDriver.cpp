#include "person.h"

int main(){
    personManager Person;
    person me;
    int input;
    std::string fileName;
    std::cout<<"Enter file name: ";
    std::cin>>fileName;
    Person.loadFile(fileName);
    while(true){
        
        Person.print();
        
        // File.add();
        std::cout<<"1. Add Person\n";
        std::cout<<"2. Remove Person\n";
        std::cin>>input;
        switch(input){
            case 1:
                std::cout<<"Enter Name and Score to be entered: ";
                std::cin>>me.name>>me.score;
                Person.insert(me);
                break;
            case 2: 
                 std::cout<<"Enter Name and Score to be deleted: ";
                 std::cin>>me.name>>me.score;
                 Person.searchAndRemove(me);

        }
    }
    
    
    
}