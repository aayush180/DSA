#include<bits/stdc++.h>
using namespace std;

int  CountAllSubSetSum(int wt[],int sum,int n)
{
   
   int arr[n+1][sum+1];
   //For Initalizing The 1 and 0 to the 0th row and column
   for(int i=0;i<=n;i++){
       for(int j=0;j<=sum;j++){
           if(i==0){
               arr[i][j] =0;
           }
           if(j==0){
               arr[i][j] =1;
           }
       }
   }
   //For Initalizing The 0 and 1 To The Remaning Array 
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=sum;j++)
       {
           if(wt[i-1]<=j){
               arr[i][j]=arr[i-1][j-wt[i-1]] + arr[i-1][j];
           }
           else{
               arr[i][j]=arr[i-1][j];
           }
       }
   }
   return arr[n][sum];
}

int CountWithDiff(int wt[],int diff,int n){
    int Arraysum=0;

    for(int i=0;i<n;i++){
        Arraysum=Arraysum+wt[i];
    }
    int sum=(diff+Arraysum)/2;
    return CountAllSubSetSum(wt,sum,n);
}

int main(){

    int wt[]={1,1,2,3};
    int n=sizeof(wt)/sizeof(int);
    int diff=1;
    int sum=4;
    cout<<CountWithDiff(wt,diff,n);
}