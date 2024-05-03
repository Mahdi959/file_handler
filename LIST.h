#ifndef LIST_H
#define LIST_H
#include <iostream>

template <typename BaseData>
class list{
     
    
    private:
        BaseData data;
        list<BaseData> *next;
        list<BaseData> *head;
        list<BaseData> *curr;
        list<BaseData> *prev;

    public:
        list();//Constructor
        void add(BaseData data);
        void print();
        void searchAndRemove(BaseData& target);
        void remove (list<BaseData>*& target);
};
#include "LIST.t"
#endif