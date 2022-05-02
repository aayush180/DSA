#include<bits/stdc++.h>
using namespace std;


int KnapSack(int wt[],int va[],int W,int n)
{
    vector<vector<int>> k(n+1,vector<int>(W+1));
    //For Initalization Of Zeros To 0th Col and row 
    for(int i=0;i<=n;i++){
        for(int j=0;j<=va[i];j++){
            if(i==0 || j==0){
                k[i][j]=0;
            }
        }
    }
    //Agaian two Loops to Initalize The Remaining Matrix
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            if(wt[i-1]<=j){
                k[i][j]=max((va[i-1]+k[i-1][j-wt[i-1]]),k[i-1][j]);
            }
            else{
                k[i][j]=k[i-1][j];
            }
        }
    }
    return k[n][W];
}

int main(){

    int wt[]={2,5,1,3,4};
    int va[]={6,1,3,5,2};
    int W=7;
    int n=5;

    cout<<KnapSack(wt,va,W,n);
}