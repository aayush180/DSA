#include<iostream>
using namespace std;

void Print(int A[100][100],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",A[i][j]);
        }
        cout<<endl;
    }
}


int main(){

    int A[100][100];
    
    cout<<"Enter Rows And Columns "<<endl;
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    printf("\n");
    Print(A,n,m);


}