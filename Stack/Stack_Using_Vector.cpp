#include<iostream>
#include"Stack_Vector.h"
using namespace std;

int main(){
    VStack<int> st;

    st.Push(10);
    st.Push(20);
    st.Push(30);
    st.Push(40);
    st.Push(50);

    while(!st.IsEmpty()){
        cout<<st.Top()<<" ";
        st.Pop();
    }

}