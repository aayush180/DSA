#include<bits/stdc++.h>
using namespace std;

int UnboundedMemo(int wt[],int va[],int W,int n)
{
   int arr[n+1][W+1];
   //For Initalizing The 0th row and column With 0s
   for(int i=0;i<=n;i++){
       for(int j=0;j<=W;j++){
           if(i==0 || j==0){
               arr[i][j]=0;
           }
       }
   }
   //For Initalizing The Remaning Array
   for(int i=1;i<=n;i++){
       for(int j=1;j<=W;j++){
           if(wt[i-1]<=j){
               arr[i][j]=max((va[i-1]+arr[i][j-wt[i-1]]),arr[i-1][j]);
           }
           else{
               arr[i][j]=arr[i-1][j];
           }
       }
   }

   return arr[n][W];
}

int main(){
   
    int wt[]={2,5,1,3,4};
    int va[]={6,1,3,5,7};
    int n=5;
    int W=8;

    cout<<UnboundedMemo(wt,va,W,n);

}