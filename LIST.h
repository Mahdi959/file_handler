#ifndef LIST_H
#define LIST_H
#include <iostream>

template <typename BaseData>
class list{
     
    
    private:
        
        struct Node{
            BaseData data;
            Node *prev = nullptr;
            Node *next = nullptr;

        };    
        Node *head;
        Node *curr;
        
    public:
        list();//Constructor
        void add(BaseData data);
        void print();
        void searchAndRemove(BaseData& target);
        void remove (Node*& target);
};
#include "LIST.t"
#endif