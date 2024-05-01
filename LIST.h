#include <iostream>

template <typename BaseData>
class list{
     
    
    private:
        BaseData data;
        list<BaseData> *next;
        list<BaseData> *head;
        list<BaseData> *curr;
      

    public:
        list(){
            next = nullptr;
            head = nullptr;
        }
        void add(BaseData data){
             
            if(head==nullptr){
               
                this->data =data;
                head = this;
                curr = this;
                
            }
           else{
                
               
                while(curr->next){
                    curr = curr->next;
                }
                curr-> next = new list<BaseData>;
                curr->next->data = data;
           }
        }
        void print(){   
            list<BaseData>* curr = head;
            
            while(curr!=nullptr){
                std::cout<<curr->data.name<<" "<<curr->data.score<<std::endl;
                curr = curr->next;
            }
            
        }
        void searchAndRemove(BaseData& target){
            list<BaseData>* curr = head;
            while((curr->data.name)!= target.name && curr != nullptr){
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
            if(target == nullptr)return;
            if(target->next == nullptr){
                delete target;
                target = nullptr;
                return; 
            }
            
            list<BaseData>* temp = new list<BaseData>;
            temp->data = target->next->data;
            temp->next = target->next->next;
            
            delete target->next;
            target->next = temp->next;
            target->data = temp->data;
            delete temp;
        }
};
