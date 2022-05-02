#include<iostream>
using namespace std;

vector<string> lcsubstring(string a,string b){

    int m=a.length();
    int n=b.length();

    vector<string> st;

    int dp[m+1][n+1];

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            if(a[i]==b[j]){
                dp[i][j]=1+dp[i-1][j-1];
                st.push_back(i);
            }
            else{
                dp[i][j]=0;
            }
        }
    }
    reverse(st.begin(),st.end());
    return st;
}


int main(){

    string a="Apple";
    string b="PineApple";
    cout<<lcsubstring(a,b);
}