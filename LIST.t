 template <typename BaseData>
list<BaseData>::list(){ //constructor
            next = nullptr;
            head = nullptr;
            curr = nullptr;
            prev = nullptr;
        }
template <typename BaseData>
void list<BaseData>:: remove (list<BaseData>*& target){
            if(target == nullptr)return; //nothing to remove
            if(target->next == nullptr){//last node deletion
                target->prev->next = nullptr; //to avoid prev pointing to freed memory after target deleted
               
                delete target;
                target = nullptr; 
                return; 
            }
            //unlinking target to delete it
            target->prev->next = target->next;
            target->next->prev = target->prev;
            
            delete target;
        }
template <typename BaseData>
void list<BaseData>:: searchAndRemove(BaseData& target){
           curr = head;
           while(curr != nullptr && (curr->data.name != target.name)){//finding target to be deleted
             curr = curr->next;
            }
            if((curr->data.name)== target.name){
                remove(curr);
            }
            else{
                
                std::cout<<"not found";
            }
        }
template <typename BaseData>      
void list<BaseData>:: print(){   
            curr = head;
            //print list
            while(curr){
                std::cout<<curr->data.name<<" "<<curr->data.score<<std::endl;
                curr = curr->next;
            }
            
        }
template <typename BaseData>
void list<BaseData>:: add(BaseData data){
             this->curr = this;
            if(head==nullptr){ // add for first node
               
                this->data =data;
                this->head = this;
                
                
            }
           else{
                
               
                while(curr->next!=nullptr){ //finding the space for new node
                    
                    curr = curr->next;
                }
                prev = curr; // prev as temporary data holder
                curr-> next = new list<BaseData>;
                curr->next->data = data;
                curr->next->prev = prev; //
           }
        };