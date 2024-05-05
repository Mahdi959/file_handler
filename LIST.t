 template <typename BaseData>
list<BaseData>::list(){
            next = nullptr;
            head = nullptr;
            curr = nullptr;
            prev = nullptr;
        }
template <typename BaseData>
void list<BaseData>:: remove (list<BaseData>*& target){
            if(target == nullptr)return;
            if(target->next == nullptr){
                target->prev->next = nullptr;
               
                delete target;
                target = nullptr;
                return; 
            }
            
            list<BaseData>* temp = new list<BaseData>;
            temp->data = target->next->data;
            temp->next = target->next->next;
            temp->prev = target->next->prev;
            
            delete target->next;
            target->next = temp->next;
            target->data = temp->data;
            target->prev = temp->prev;
            delete temp;
        }
template <typename BaseData>
void list<BaseData>:: searchAndRemove(BaseData& target){
            list<BaseData>* curr = head;
           while(curr != nullptr && (curr->data.name != target.name)){
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
template <typename BaseData>      
void list<BaseData>:: print(){   
            curr = head;
            
            while(curr){
                std::cout<<curr->data.name<<" "<<curr->data.score<<std::endl;
                curr = curr->next;
            }
            
        }
template <typename BaseData>
void list<BaseData>:: add(BaseData data){
             this->curr = this;
            if(head==nullptr){
               
                this->data =data;
                this->head = this;
                
                
            }
           else{
                
               
                while(curr->next){
                    
                    curr = curr->next;
                }
                prev = curr;
                curr-> next = new list<BaseData>;
                curr->next->data = data;
                curr->next->prev = prev;
                 
                 
                 std::cout<<prev->data.name;
           }
        };