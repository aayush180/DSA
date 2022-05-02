#include<bits/stdc++.h>
using namespace std;

//Checking The Subset Is Present Or not
//Sunset Sum Is The Set Of Two No That Are Given In The Array That Can Be Added As To Become The Given Sum
bool SubsetSum(int wt[],int sum,int n)
{
   
   bool arr[n+1][sum+1];
   //For Initalizing The True And False To The 0th Row And Col
   for(int i=0;i<=n;i++){
       for(int j=0;j<=sum;j++){
           if(i==0){
               arr[i][j] = false;
           }
           if(j==0){
               arr[i][j] = true;
           }
       }
   }
   //For Initalizing The True And False To The Remaning Array 
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=sum;j++)
       {
           if(wt[i-1]<=j){
               arr[i][j]=arr[i-1][j-wt[i-1]] || arr[i-1][j];
           }
           else{
               arr[i][j]=arr[i-1][j];
           }
       }
   }
   return arr[n][sum];
}

int main(){

    int wt[]={2,5,3,8,6};
    int n=sizeof(wt)/sizeof(int);
    int sum=8;

    cout<<SubsetSum(wt,sum,n);
}