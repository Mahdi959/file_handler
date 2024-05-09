template <typename BaseData>
list<BaseData>::list(){ //constructor
            head = nullptr;
            curr = nullptr;
        }
template <typename BaseData>
void list<BaseData>:: remove (Node *& target){
            if(target == nullptr)return; //nothing to remove
            if(target->next == nullptr){//last node deletion
                target->prev->next = nullptr; //to avoid prev pointing to freed memory after target deleted
               
                delete target;
                target = nullptr; 
                return; 
            }
            //unlinking target to delete it(Linking other Nodes)
            target->prev->next = target->next;
            target->next->prev = target->prev;
            
            delete target;
        }
template <typename BaseData>
void list<BaseData>:: searchAndRemove(BaseData& target){
            Node* curr = head;
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
            Node* curr = head;
            //print list
            while(curr){
                std::cout<<curr->data.name<<" "<<curr->data.score<<std::endl;
                curr = curr->next;
            }
            
        }
template <typename BaseData>
void list<BaseData>:: add(BaseData data){
             Node *curr = head;
            if(head==nullptr){ // add for first node
                head = new Node;
                head->data =data;   
            }
           else{         
                while(curr->next!=nullptr){ //finding the space for new node         
                    curr = curr->next;
                }
                Node* temp = curr; // prev as temporary data holder
                curr-> next = new Node;
                curr->next->data = data;
                curr->next->prev = temp; //
           }
        };