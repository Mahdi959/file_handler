#include <iostream>

template <typename BaseData>
class list{
     
    
    private:
        BaseData data;
        list<BaseData> *next;
        list<BaseData> *curr;
        list<BaseData> *head;
      

    public:
        list(){
            next = nullptr;
            head = nullptr;
            curr = nullptr;
        }
        void add(BaseData data){
            if(head==nullptr){
                this->data =data;
                head = this;
                
            }
           else{
                
                curr =head;
                while(curr->next){
                    curr = curr->next;
                }
                curr-> next = new list<BaseData>;
                curr->next->data = data;
           }
        }
        void print(){   
            curr = head;
            while(curr){
                std::cout<<curr->data.name<<" "<<curr->data.score<<std::endl;
                curr = curr->next;
            }
            
        }
        void searchAndRemove(list<BaseData> target){

        }
        
};
