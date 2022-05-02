#include<iostream>
using namespace std;


int Firstoccurance(int A[],int n,int key){

    if(n==0){
        return -1;
    }

    if(A[0]==key){
        return 0;
    }
    int subindex=Firstoccurance(A+1,n-1,key);

    if(subindex!=-1){
        return subindex+1;
    }
    return -1;
}


int main(){

    int A[]={1,2,4,6,8,10};
    int n=sizeof(A)/sizeof(int);
    int key=8;

    cout<<Firstoccurance(A,n,key);

}