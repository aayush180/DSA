#include<iostream>
#include<vector>
using namespace std;

int main()
{
 // 2d vector
   vector<vector<int>> arr={
               {1,2,3},
               {4,5,6,7},
               {8,9},
               {10,11,12}
   };

   arr[0][0]+=11;
   for(int i=0; i<arr.size();i++){
       for(int  x: arr[i]){
           cout<<x<<" ";
       }
   }


}