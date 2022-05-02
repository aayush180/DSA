#include<bits/stdc++.h>
using namespace std;

int CoinWays(int coins[],int n, int target){
        
    int arr[n+1][target+1];
    //For Initalizing The 0th Row And Column
    for(int i=0; i<=n; i++){
        for(int j=0; j<=target; j++){
            if(i==0){
                arr[i][j]=0;
            }
            if(j==0){
                arr[i][j]=1;
            }
        }
    }
    //For Initalizing The Remaning Array
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=target;j++){
            if(coins[i-1]<=j){
                arr[i][j]=arr[i][j-coins[i-1]]+arr[i-1][j];
            }
            else{
                arr[i][j]=arr[i-1][j];
            }
        }
    }
    return arr[n][target];
}


int main(){

    int coins[]={1,3,2,5};
    int target=8;
    int n=sizeof(coins)/sizeof(int);

    cout<<CoinWays(coins,n,target);
}