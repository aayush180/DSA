#include<iostream>
using namespace std;

void swap(int *x,int *y) {
    int temp=*x;
    *x=*y;
    *y=temp;
}

void Bubble(int A[],int n){
    int i,j;

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                swap(A[j],A[j+1]);
            }
        }
    }
}

void Rbubble(int A[],int n){
    if(n==1){
        return;
    }
    int j;
     for(j=0;j<n-1;j++)
     {
        if(A[j]>A[j+1])
        {
         swap(A[j],A[j+1]);
        }
    }
    Rbubble(A,n-1);

}
void Rbubble_2(int A[],int n,int j){
    //Base Case
    if(n==1){
        return;
    }
    if(j==n-1){
        Rbubble_2(A,n-1,0);
        return;
    }
    if(A[j]>A[j+1]){
        swap(A[j],A[j+1]);
    }
    Rbubble_2(A,n,j+1);


}

void Print(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}


int main(){

    int A[]={3,1,7,2,6,4};
    int n=sizeof(A)/sizeof(int);

    Rbubble_2(A,n,0);
    Print(A,n);

    
}