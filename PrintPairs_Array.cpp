#include<iostream>
using namespace std;


void PrintPairsArray(int A[],int n){
    for(int i=0;i<n;i++){
        int x=A[i];
        for(int j=i+1;j<n;j++){
            int y=A[j];
            printf("(%d,%d)",x,y);
        }
        printf("\n");
    }
}

int main(){

    int A[]={10,20,30,40,50};
    int n=sizeof(A)/sizeof(int);
    cout<<"Pairs Are "<<endl;
    PrintPairsArray(A,n);
}