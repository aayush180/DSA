#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *lchild;
    Node *rchild;

    Node(int d){
        data=d;
        lchild=rchild=NULL;
    }
};

Node * Buildtree(){
     int d;
     cout<<"Enter Node Data :";
     cin>>d;

     if(d!=-1){
         Node * n=new Node(d);
         n->lchild=Buildtree();
         n->rchild=Buildtree();
         return n;
        }
        else{
            return NULL;
        }
}
void Preorder(Node * root){
    if(root==NULL){
        return;
    }
    else{
        cout<<root->data<<" ";
        Preorder(root->lchild);
        Preorder(root->rchild);
    }
}
void Inorder(Node * root){
    if(root==NULL){
        return;
    }
    else{
        Inorder(root->lchild);
        cout<<root->data<<" ";
        Inorder(root->rchild);
    }
}
void Postorder(Node * root){
    if(root==NULL){
        return;
    }
    else{
        Postorder(root->lchild);
        Postorder(root->rchild);
        cout<<root->data<<" ";
    }
}

int main(){
    Node * root=Buildtree();
    Postorder(root);

}

