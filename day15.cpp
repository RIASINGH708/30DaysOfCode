      Node* insert(Node *head,int data)
      {
            //Complete this method
            Node *t=new Node(data);
            if(head==NULL){
                t->next=head;
                head=t;
            }
            else{
                Node *p=head;
                while(p->next!=NULL){
                    p=p->next;
                }
                t->next=p->next;
                p->next=t;
            }
            return head;
      }
