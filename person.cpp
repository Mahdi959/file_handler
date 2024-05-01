void personManager::loadFile(std::string name){
    std::ifstream inFile(name);
   
    while(inFile>>PERSON.name>>PERSON.score){
        LIST.add(PERSON);
    }
    
}
void personManager::print(){

    LIST.print();
 //working
}
void personManager::insert(){
    //wokring
}
void personManager::searchAndRemove(person me){
    LIST.searchAndRemove(me);
}