#include<iostream>
#include<vector>
#include<stack>
using namespace std;


void NearestSmallerRight(int arr[],int n){
    stack<int> st;
    vector<int> v;
    
    //Loop To Fill The Stack From Right To Find The Smallest AT Right 
    for(int i=n; i>=0; i--){
         if(!st.empty() && st.top() < arr[i]){
            v.push_back(st.top());
        }
        else if(!st.empty() && st.top()>= arr[i])
        {
            while(!st.empty() && st.top() >= arr[i]){
                st.pop();
            }
            if(st.empty()){
                v.push_back(-1);
            }
            else{
                v.push_back(st.top());
            }
        }
        st.push(arr[i]);
    }
    for(int i=n-1;i>=0;i--){
        cout<<v[i]<<" ";
    }

}


int main(){

    int arr[]={2,4,1,5,8,3};    // 1 1 -1 3 3 -1
    int n=sizeof(arr)/sizeof(int);

    NearestSmallerRight(arr,n);
}