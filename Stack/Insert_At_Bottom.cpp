#include<iostream>
#include<stack>
using namespace std;

void InsertAtBottom(stack<int> &st,int key){
    if(st.empty()){
        st.push(key);
        return;
    }

    int temp=st.top();
    st.pop();

    InsertAtBottom(st,key);
    st.push(temp);
}

void ReverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }

    int t=st.top();
    st.pop();
    ReverseStack(st);
    InsertAtBottom(st,t);

}



int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    
    ReverseStack(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}


