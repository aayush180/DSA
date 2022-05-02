#include<bits/stdc++.h>
using namespace std;

int Lcs(string s1,string s2,int m,int n){
    
    int dp[m+1][n+1];
    //For Initalizing The 0th Row And Column
    if(m==0 || n==0){
        dp[m][n]=0;
    }
    if(s1[m-1]==s2[n-1]){
        dp[m][n]=1+Lcs(s1,s2,m-1,n-1);
    }
    else{
        dp[m][n]=max(Lcs(s1,s2,m,n-1),Lcs(s1,s2,m-1,n));
    }

    return dp[m][n];
}

int main(){

    string s1,s2;
    cin>>s1;
    cin>>s2;
    int m=s1.size();
    int n=s2.size();
    cout<<Lcs(s1,s2,m,n);
}
