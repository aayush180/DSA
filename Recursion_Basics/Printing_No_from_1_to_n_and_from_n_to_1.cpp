#include<iostream>
using namespace std;

void Increasing(int n){
    if(n==0){
        return;
    }
    else{
        Increasing(n-1);
        cout<<n<<" ";
    }
}
void Decreasing(int n){
    if(n==0){
        return;
    }
    else{
        cout<<n<<" ";
        Decreasing(n-1);
    }
}

int main(){

  cout<<"Enter The No :";
  int n;
  cin>>n;

  Decreasing(n);

}