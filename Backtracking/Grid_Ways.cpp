#include<iostream>
using namespace std;

int Gridways(int i, int j,int m,int n){
    if(i==m-1 && j==n-1){
        return 1;
    }
    if(i>=m || j>=n){
        return 0;
    }     //For Down counting  //For Counting In The Right     
    int ans=Gridways(i+1,j,m,n)+Gridways(i,j+1,m,n);
    return ans;
}

int main(){

    int m,n;
    cin>>m>>n;

    cout<<Gridways(0,0,m,n);//I will Gives The All Possible Steps to Reach The Given Point 


}