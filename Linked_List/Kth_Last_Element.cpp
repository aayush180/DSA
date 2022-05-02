#include<iostream>
#include"List.h"
using namespace std;
//Brute force approach
//   1->2->3->4->5->6->
//   we should get the kth last element that is 4

int KthLastElement(Node *start,int k){
    int cnt = 0;

    while(start != NULL){
        start=start->next;
        cnt++;
    }
    Node *temp =li.begin();
    for(int i=1;i<=cnt-k;i++){
        temp=temp->next;
    }
    return temp->data;
}


int main(){

    List li;
    li.Push_Front(1);
    li.Push_Back(2);
    li.Push_Back(3);
    li.Push_Back(4);
    li.push_Back(5);
    li.Push_Back(6);

    li.Print();
    cout<<endl;
    int head=li.begin();
    int ele=KthLastElement(head,3);
    cout<<"Element Is "<<ele<<endl;



}