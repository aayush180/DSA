#include<iostream>
#include"Stack_LL.h"
using namespace std;


int main(){
      
    Stack<int> st;

    st.Push(11);
    st.Push(12);
    st.Push(14);
    st.Push(16);
    st.Push(18);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.Pop();
    }

      
    
     
}