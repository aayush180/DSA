#include<iostream>
#include"List.h"
using namespace std;

int main(){
    List li;

    li.Push_Front(1);
    li.Push_Back(2);
    li.Push_Back(3);
    li.Push_Back(4);




    Node *head=li.begin();
        while(head !=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
    int key;
    cout<<"Enter Key:";
    cin>>key;
    cout<<"Element is present at index:"<<li.Recersivesearch(key)<<endl;

   
}