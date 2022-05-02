#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void NearestSmallerLeft(int arr[],int n)
{
    vector<int> v;
    stack<int> st;

    for(int i=0;i<n;i++)
    {
        if(st.empty())
        {
            v.push_back(-1);
        }
        else if(!st.empty() && st.top() < arr[i])
        {
            v.push_back(st.top());
        }
        else if(!st.empty() && st.top() >= arr[i])
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
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}


int main(){

    int arr[]={2,4,3,6};  // -1 2 2 3
    int n=sizeof(arr)/sizeof(int);

    NearestSmallerLeft(arr, n);
}

