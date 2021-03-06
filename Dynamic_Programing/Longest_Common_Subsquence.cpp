#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2,int m,int n){
     
     //Base Case
     if(m==0 || n==0){
         return 0;
     }
     else if(s1[m-1]==s2[n-1]){
         return 1+lcs(s1,s2,m-1,n-1);
     }
     else{
         return max(lcs(s1,s2,m,n-1),lcs(s1,s2,m-1,n));
     }
}

int main(){

    string s1,s2;
    cin>>s1;
    cin>>s2;
    int m=s1.size();
    int n=s2.size();

    cout<<lcs(s1,s2,m,n);
}