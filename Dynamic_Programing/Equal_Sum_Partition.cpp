#include<bits/stdc++.h>
using namespace std;

bool SubSetSum(int wt[],int sum,int n)
{
    bool arr[n+1][sum+1];
    //For Initalizing The 0th row and column
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++){
            if(i==0){
                arr[i][j]=false;
            }
            if(j==0){
                arr[i][j]=true;
            }
        }
    }
    //For Initalizing The Remaning Array
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

bool EqualSumPartition(int wt[],int n)
{
    //Checking If The Total Sum Of The Array Is Even Or Odd
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+wt[i];
    }
    //Checking If The No IS odd if odd return false
    if(sum%2 != 0){ 
        return false;
    }
    else{
       return SubSetSum(wt,sum/2,n);
    }
}


int main(){
    int wt[]={9,4,5};
    int n=sizeof(wt)/sizeof(int);
    int sum=8;

    if(EqualSumPartition(wt,n)){
        cout<<"The Array Can Be Equally Partitioned"<<endl;
    }
    else{
        cout<<"The Array Can Not Be Equally Partitioned"<<endl;
    }
}