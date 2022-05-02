#include<iostream>
using namespace std;

//Maximum Profit 
int KnapSack(int wt[],int va[],int W,int n){
    //Base Condition
    if(n==0 || W==0){
        return 0;
    }
    //If The Weight In Array IS Less or equal then only we can put in the KnapSack
    if(wt[n-1]<=W){
        return max((va[n-1]+KnapSack(wt,va,W-wt[n-1],n-1)),KnapSack(wt,va,W,n-1));
    }
    //If The Weight Is Greater Than The Capacity Of The KnapSack Then We Cannot Add That Item
    if(wt[n-1]>W){
        return KnapSack(wt,va,W,n-1);
    }
}

int main(){

    int wt[]={2,5,1,3,4};
    int va[]={6,1,3,5,7};
    int n=5;

    int W=8;

    cout<<KnapSack(wt,va,W,n);
}