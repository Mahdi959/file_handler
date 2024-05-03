 template <typename BaseData>
list<BaseData>::list(){
            next = nullptr;
            head = nullptr;
            
        }
template <typename BaseData>
void list<BaseData>:: remove (list<BaseData>*& target){
            if(target == nullptr)return;
            if(target->next == nullptr){
                prev->next = nullptr;
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
            list<BaseData>* curr = head;
            
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
                    this->prev = curr;
                    this->curr = curr->next;
                }
                curr-> next = new list<BaseData>;
                curr->next->data = data;
           }
        };