#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node * lchild;
    Node * rchild;

    Node(int d)
    {
      data=d;
      lchild=rchild=NULL;
    }
};

Node *Buildtree(){
    int d;
    cin >> d;

    Node * n=new Node(d);
    
    if(d!=-1){
        cout<<"Enter The Lchild Data "<<endl;
        n->lchild=Buildtree();
    }
 


}