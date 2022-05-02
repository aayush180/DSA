#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> v={1,2,3,4,5};
    v.push_back(10);
    v.push_back(20);
    

   // for(int i=0;i<v.size();i++){
      //  cout<<v[i]<<" ";
  //  }
   // cout<<endl;

   // cout<<v.size()<<endl;
   // cout<<v.capacity()<<endl;

    //we can also use fill constructor to fill the vector
    vector<int> arr(10,7);
    arr.push_back(20);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

   

   
   
}