#include <iostream>

template <typename BaseData>
class list{
     
    
    private:
        BaseData data;
        list<BaseData> *next;
        list<BaseData> *head;
      

    public:
        list(){
            next = nullptr;
            head = nullptr;
        }
        void add(BaseData data){
            if(head==nullptr){
                this->data =data;
                head = this;
                
            }
           else{
                
                list<BaseData>*curr =head;
                while(curr->next){
                    curr = curr->next;
                }
                curr-> next = new list<BaseData>;
                curr->next->data = data;
           }
        }
        void print(){   
            list<BaseData>* curr = head;
            
            while(curr){
                std::cout<<curr->data.name<<" "<<curr->data.score<<std::endl;
                curr = curr->next;
            }
            
        }
        void searchAndRemove(BaseData& target){
            list<BaseData>* curr = head;
            while((curr->data.name)!= target.name){
                curr = curr->next;
            }
            if((curr->data.name)== target.name){
                remove(curr);
              std::cout<<"found"<<std::endl;
            }
            else{
                
                std::cout<<"not found";
            }
        }
        void remove (list<BaseData>*& target){
            list<BaseData>* temp = target;
            target = target->next;
            delete temp;
        }
};
