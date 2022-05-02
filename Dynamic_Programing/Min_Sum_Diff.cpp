#include<bits/stdc++.h>
using namespace std;

int MinSumDiff(int arr[],int n){

    //For Calculating The Total sum
    int sum=0;
    for(int i=0;i<n;i++){
       sum+=arr[i];
    }

    bool dp[n+1][sum+1];

    //for Initalizing 0t column
    for(int row=0;row<n;row++){
        dp[row][0]=true;
    }
    //For Initalizing 0t Row
    for(int col=1;col<=sum;col++){
        dp[0][col]=false;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(arr[i-1]<=j){
                dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }
            if(arr[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    vector<int> v;
    for(int k=0;k<sum/2;k++){
        if(dp[n][k]==true){
            v.push_back(k);
        }
    }
    
    int mn=INT_MAX;
    for(int i=0;i<v.size();i++){
        mn=min(mn,sum-(2*v[i]));
    }
    return mn;
}


int main(){

    int arr[]={1,6,5,11};
    int n=sizeof(arr)/sizeof(int);

    cout<<MinSumDiff(arr,n);
}
