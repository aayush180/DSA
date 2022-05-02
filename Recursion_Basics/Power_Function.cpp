#include<iostream>
using namespace std;

int PowerFunction(int a,int n){
    if(n==0) return 1;
    return a*PowerFunction(a,n-1);
    
}

int main(){
    int a,n;
    cin>>a>>n;

    cout<<PowerFunction(a,n)<<endl;


}