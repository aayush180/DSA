#include<bits/stdc++.h>
using namespace std;

int UnboundedKnapsack(int wt[],int va[],int W,int n)
{
    
    //Base Case 
    if(n==0 || W==0){
        return 0;
    }
    else if(wt[n-1]<=W){
        return max((va[n-1]+UnboundedKnapsack(wt,va,W-wt[n-1],n)),UnboundedKnapsack(wt,va,W,n-1));
    }
    else{
        return UnboundedKnapsack(wt,va,W,n-1);
    }
}


int main(){

    int wt[]={2,5,1,3,4}; //In This The 6th value is Repeated 4 times bcz 2*4=8
    int va[]={6,1,3,5,7};
    int n=5;
    int W=8;

    cout<<UnboundedKnapsack(wt,va,W,n);
}