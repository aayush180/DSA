#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * lchild;
    Node * rchild;

    Node(int d){
        data = d;
        lchild=rchild=NULL;
    }
};

Node *Buildtree()
{  
   int data;
   Node *root=NULL;
   cout<<"Enter Node Data :";
   cin>>data;

   if(data == -1){
       return NULL;
   }
   Node * n=new Node(data);
   cout<<"Enter Left Node Data of "<<data<<" :";
   n->lchild=Buildtree();
   cout<<"Enter Right Node Data of "<<data<<" :";
   n->rchild=Buildtree();

   return n;
}

void Preorder(Node *root){
    if(root){
        cout<<root->data;
        Preorder(root->lchild);
        Preorder(root->rchild);
    }
}


int main(){
    Node *root=Buildtree();
    Preorder(root);

}