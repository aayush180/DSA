#include<bits/stdc++.h>
using namespace std;


int MinSubsetDiff(int arr[],int n)
{
    //Calculating Total Sum Of Array
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }

    bool dp[n+1][sum+1];
    //For Initalizing The 0th Row And Column to True and False
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0){
                dp[i][j]=false;
            }
            if(j==0){
                dp[i][j]=true;
            }
        }
    }
    //For Initalizing The Remaning Array To True and False
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++){
            if(arr[i-1]<=j){
                dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    int diff=INT_MAX;
    //Checking The last Row Elements Are True Or Not
    for(int k=sum/2;k>=0;k--){
         if(dp[n][k]==true){
             diff=sum-2*k;
             break;
         }
    }
    return diff;
  
}

int main(){

    int arr[]={1,2,7,3};
    int n=sizeof(arr)/sizeof(int);

    //cout<<MinSubsetDiff(arr,n);
    

}