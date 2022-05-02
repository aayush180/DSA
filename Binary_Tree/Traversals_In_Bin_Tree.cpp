#include<bits/stdc++.h>
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

    int va;
    cout<<"Enter The Node Data :";
    cin>>va;

    if(va!=-1){
        Node *n=new Node(va);
        n->lchild=Buildtree(); //For Insertion In The Left Subtree
        n->rchild=Buildtree(); //For Insertion In The Right Subtree
        return n;
    }
    else{
        return NULL;
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

void Inorder(Node *n){
    if(n==NULL){
        return;
    }
    else{
        Inorder(n->lchild);
        cout<<n->data<<" ";
        Inorder(n->rchild);
    }
}

void Postorder(Node *n){
    if(n==NULL){
        return;
    }
    else{
        Postorder(n->lchild);
        Postorder(n->rchild);
        cout<<n->data<<" ";
    }
}

void levelorder(Node *root)
{
    
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node * temp=q.front();

        if(temp==NULL){
            cout<<endl;
            q.pop();

            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{

            q.pop();
            cout<<temp->data<<" ";
            if(temp->lchild){
                q.push(temp->lchild);
            }
            if(temp->rchild){
                q.push(temp->rchild);
            }
        }
    }
    return;
}

Node *Levelorder(){
    int val;
    cout<<"Enter The Val :";
    cin>>val;

    //Create A root node
    Node *root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node * current=q.front();
        q.pop();

        int c1,c2;
        cout<<"Enter Leftr Node c1 :";
        cin>>c1;
        cout<<"Enter Rightr Node c2 :";
        cin>>c2;

        if(c1!=-1){
            current->lchild=new Node(c1);
            q.push(current->lchild);
        }
        else{
            current->rchild=new Node(c2);
            q.push(current->rchild);
        }
    }
    return root;
}

int main(){
    
    Node * root=Levelorder();
    levelorder(root);


}