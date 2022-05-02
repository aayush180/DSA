#include<iostream>
using namespace std;

string spell[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

void NoToString(int n){
    if(n==0) return;
    int lastdigit=(n%10);
    NoToString(n/10);

    cout<<spell[lastdigit]<<" ";
}

int main(){
    
    int n;
    cout<<"Enter The No :";
    cin>>n;

    NoToString(n);
}