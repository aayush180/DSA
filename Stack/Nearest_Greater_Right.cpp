#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void NearestGreaterRight(int array[],int n)
{

  vector<int> v;
  stack<int> st;

  for(int i=n-1;i>=0;i--)
  {
      if(st.empty()){
          v.push_back(-1);
      }
      else if(!st.empty() && st.top()> array[i]){
          v.push_back(st.top());
      }
      else if(!st.empty() && st.top()<=array[i])
      {
          while(!st.empty() && st.top()<=array[i]){
              st.pop();
          }
          if(st.empty()){
              v.push_back(-1);
          }
          else{
              v.push_back(st.top());
          }
       } 
       st.push(array[i]);
   }
   for(int i=v.size()-1;i>=0;i--)
   {
      cout<<v[i]<<" ";
   }

}

int main(){
               
    int arr[]={3,10,4,2,1,2,6,1,7,2,9};//3 4 4 5 5 -1     10 -1 6 6 6 6 7 7 9 9
    int n=sizeof(arr)/sizeof(int);

    NearestGreaterRight(arr,n);

}