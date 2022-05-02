#include<bits/stdc++.h>
using namespace std;


int Knapsack(int wt[],int va[],int W,int n){

    int arr[n+1][W+1];
    memset(arr,-1,sizeof(arr));
   /*  for(int i=0;i<=n+1;i++){
        for(int j=0;j<=W+1;j++){
            arr[i][j] = -1;
        }
    }
    */
    //Base Case
    if(W==0 || n==0) return 0;
    if(arr[n][W]!=-1) return arr[n][W];
    if(wt[n-1]<=W){
        return arr[n][W]=max((va[n-1]+Knapsack(wt,va,W-wt[n-1],n-1)),Knapsack(wt,va,W,n-1));
    }
    else{
       return arr[n][W]=Knapsack(wt,va,W,n-1);
    }
}

int main()
{

    int wt[]={2,5,1,3,4};
    int va[]={6,1,3,5,2};
    int W=8;
    int n=5;

    cout<<Knapsack(wt,va,W,n);
}