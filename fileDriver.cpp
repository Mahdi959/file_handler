#include "person.h"

int main(){
    personManager Person;
    std::string fileName;
    std::cout<<"Enter file name: ";
    std::cin>>fileName;
    
    Person.loadFile(fileName);
    Person.print();
   // File.add();
    

}