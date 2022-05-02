#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
       int data;
       Node *lchild;
       Node *rchild;

    Node(int d)
    {
        data = d;
        lchild=rchild=NULL;
    }
};

Node * Buildtree(){
    int val;
    cout<<"Enter The Data :";
    cin>>val;

    if(val!=-1){
        Node *n = new Node(val);
        n->lchild=Buildtree();
        n->rchild=Buildtree();
        return n;
    }
}
void Preorder(Node *n){
    if(n==NULL){
        return;
    }
    else{
        cout<<n->data<<" ";
        Preorder(n->lchild);
        Preorder(n->rchild);
    }
}

int main(){
    Node *root=Buildtree();
    Preorder(root);
}