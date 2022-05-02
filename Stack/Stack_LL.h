#include<iostream>
using namespace std;

template<typename T>
class Stack;

template<typename T>
class LinkedNodes{
     public:
     T data;
     LinkedNodes<T>* next;

     LinkedNodes(T d){
         data = d;
     }
};

template<typename T>
class Stack
{
    LinkedNodes<T>* Head;


    public:
    Stack(){
        Head=NULL;
    }
    void Push(T d){
        LinkedNodes<T> * n=new LinkedNodes<T>(d);
        n->next = Head;
        Head = n;
    }

    void Pop(){
        if(Head!=NULL)
        {
        LinkedNodes<T>* temp = Head;
        Head=Head->next;
        delete temp;
        }
    }

    bool empty(){
        return Head==NULL;
    }   
    
    T top(){
       return Head->data;
    }
};

