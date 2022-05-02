#include<iostream>
using namespace std;

bool IsSorted(int A[],int n){
     if(n==1 || n==0){
         return true;
     }
     else if(A[0]<A[1] and IsSorted(A+1,n-1)){
         return true;
     }
     else{
         return false;
     }
}

bool IsSortedtwo(int A[],int i,int n){
    if(i==n-1){
        return true;
    }
    else if(A[i]<A[i+1] and IsSortedtwo(A,i+1,n)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int A[]={1,2,3,4,5,6,7};
    int n=sizeof(A)/sizeof(int);

    if(IsSortedtwo(A,0,n)){
        cout<<"Array Is Sorted";
    }
    else{
        cout<<"Array is not Sorted";
    }


}