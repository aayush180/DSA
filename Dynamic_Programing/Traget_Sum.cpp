#include<bits/stdc++.h>
using namespace std;

//Same As The Count The Subsets With Given Diff

int CountAllSubsets(int arr[],int sum,int n){
    
    int dp[n+1][sum+1];
    //For Initalizing The 0th row and column
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++){
            if(i==0){
                dp[i][j] = 0;
            }
            if(j==0){
                dp[i][j] = 1;
            }
        }
    }
    //For Initalizing The Remaning Array
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(arr[i-1]<=j){
                dp[i][j] =dp[i-1][j-arr[i-1]] + dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

//In This We Have To Asgin The +/- To The Array Elements Such That It Will Be Calculated To The Given Sum
//We Have To Calculate The All Possible Ways To Asgin The Signs To The Array Elements
int TargetSum(int arr[],int sum,int n){

  int Arraysum=0;
  for(int i=0;i<n;i++){
      Arraysum += arr[i];
  }
  int reqSum=(sum+Arraysum)/2;
  return CountAllSubsets(arr,reqSum,n);

}

int main(){

    int arr[]={1,1,2,5};
    int n=sizeof(arr)/sizeof(int);
    int sum=1;

    cout<<"The All Ways To Asgin The Signs To The Array Elements Are "<<TargetSum(arr,sum,n);
}
