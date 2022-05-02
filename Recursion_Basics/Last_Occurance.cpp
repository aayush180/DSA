#include<iostream>
using namespace std;

int Lastoccu(int A[],int n,int key){
 //Base Case 
 if(n==0){
     return -1;
 }
 int subindex=Lastoccu(A+1,n-1, key);
 if(subindex==-1){
     if(A[0]==key){
         return 0;
     }
     return -1;
    }
    return subindex+1;

}

int main(){
    int A[]={1,7,3,4,6,7,9,8};
    int n=sizeof(A)/sizeof(int);
    int key=7;

    cout<<Lastoccu(A,n,key);
}