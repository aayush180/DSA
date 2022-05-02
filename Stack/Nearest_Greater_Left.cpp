#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void NearestGreaterLeft(int arr[],int n){
    stack<int> st;
    vector<int> v;

    for(int i=0;i<n;i++)
    {
    if(st.empty()){
        v.push_back(-1);
    }
    else if(!st.empty() && st.top() > arr[i]){
         v.push_back(st.top());
    }
    else if(!st.empty() && st.top()<=arr[i])
    {
        while(!st.empty() && st.top()<=arr[i]){
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
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
}

void StockSpan(int arr[], int n)
{
    stack<pair<int,int>> st2;
    vector<int> v;

    for(int i=0;i<n;i++)
    {
        if(st2.empty()){
            v.push_back(-1);
        }
        else if(!st2.empty() && st2.top().first>arr[i]){
            v.push_back(st2.top().second);
        }
        else if(!st2.empty() && st2.top().first<=arr[i])
        {
            while(!st2.empty() && st2.top().first<=arr[i]){
                st2.pop();
            }
            if(st2.empty()){
                v.push_back(st2.top().second);
            }
            else{
                v.push_back(st2.top().second);
            }
        }
        st2.push({arr[i],i});
    }
    for(int i=0;i<n;i++){
        v[i]=i-v[i];
        cout<<v[i]<<" ";
    }
    
}

int main(){

    int arr[]={100,80,60,70,60,75,85};  //1 1 1 2 1 4 6
    int n=sizeof(arr)/sizeof(int);

    StockSpan(arr,n);

    
}