#include<iostream>
using namespace std;

class Node{
    public:
       int data;
       Node*next;
       friend class List;

    Node(int d){
        data = d;
        next=NULL;
    }
};
class List{
    Node *head;
    Node *tail;

       int SearchHelper(Node *start,int key){
           if(start==NULL){
               return -1;
           }
           if(start->data==key){
               return 0;
           }
           //Else Check In The Other Subpart of List
           int subindex=SearchHelper(start->next,key);
           if(subindex==-1){
               return -1;
           }
           return subindex+1;
       }

    public:

         void Print(){
            Node *temp=begin();
            while(temp != NULL){
                cout<<temp->data<<"->";
                temp=temp->next;
            }
         }
         List():head(NULL),tail(NULL){};
         Node *begin() {return head;}
    
    void Push_Front(int d){
        if(head==NULL){
            Node *n=new Node(d);
            head=tail=n;
        }else{
        Node *n=new Node(d);
        n->next=head;
        head=n;
        }
    }

    void Push_Back(int d){
        if(head==NULL){
            Node *n=new Node(d);
            head=tail=n;
        }
        else{
        Node *n=new Node(d);
        tail->next=n;
        tail=n;
        }
    }

    void Insert(int d,int pos){
        if(pos==0){
            Push_Front(d);
            return;
        }
        Node *temp=head;

        for(int jump=1;jump<=pos-1;jump++){
            temp=temp->next;
        }
        Node *n=new Node(d);
        n->next=temp->next;
        temp->next=n;
    }

    int Search(int key)
    {

        Node*temp=head;
        int idx=0;

        while(temp != NULL){
            if(temp->data==key){
                return idx;
            }
            idx++;
            temp=temp->next;
        }
    }

    int Recersivesearch(int key){
        int ind=SearchHelper(head,key);
        return ind;
    }
};