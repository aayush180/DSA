#include<bits/stdc++.h>
using namespace std;


void StockSpan(int arr[],int n){
    vector<int> v;
    stack<pair<int,int>> st;

    for(int i=0;i<n;i++){
        if(st.empty()){
            v.push_back(-1);
        }
        else if(!st.empty() && st.top().first > arr[i]){
            v.push_back(st.top().second);
        }
        else if(!st.empty() && st.top().first <= arr[i]){
            while(!st.empty() && st.top().first <= arr[i]){
                st.pop();
            }
            if(st.empty()){
                v.push_back(-1);
            }
            else{
                v.push_back(st.top().second);
            }
        }
        st.push({arr[i],i}); 
    }
    //Subtract The I With Index Stored In The Vector
    for(int i=0;i<n;i++){
        v[i]=i-v[i];
        cout<<v[i]<<" ";
    }

}


int main(){

    int arr[]={100,80,60,70,60,75,85};
    int n=sizeof(arr)/sizeof(int);

    StockSpan(arr,n);

}