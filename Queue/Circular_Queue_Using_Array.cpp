#include<iostream>
#include"Queue.h"
using namespace std;

int main(){
    Queue q;

    q.PushQ(10);
    q.PushQ(20);
    q.PushQ(30);
    q.PushQ(40);
    q.PushQ(50);
    q.PushQ(60);
    

    

    while(!q.EmptyQ()){
        cout<<q.FrontQ()<<" ";
        q.PopQ();
    }


}