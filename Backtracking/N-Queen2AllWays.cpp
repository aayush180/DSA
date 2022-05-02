#include<iostream>
using namespace std;

void Printboard(int board[][20],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool Canplace(int board[][20],int n,int x,int y){

    //For Checking In The Columns
    for(int k=0;k<x;k++){
        if(board[k][y]==1){
            return false;
        }
    }
    //For Checking In The Left Digonal
    int i=x,j=y;
    while(i>=0 && j>=0){
        if(board[i][j]==1){
            return false;
        }
        i--; j--;
    }
    i=x;j=y;
    while(i>=0 && j<n){
        if(board[i][j]==1){
            return false;
        }
        i--;j++;
    }
    return true;
}


int Nqueen(int board[][20],int n,int row){
    //Base Condition
    if(row==n){
        Printboard(board,n);
        return 1;
    }
    //For Checkng In The All Columns
    int ways=0;
    for(int j=0;j<n;j++){
        if(Canplace(board,n,row,j)){
           board[row][j]=1;
           ways +=Nqueen(board,n,row+1);
           board[row][j]=0;
        }
    }
    return ways;
}

int main(){

    int board[20][20]={0};
    int n;
    cin>>n;

    cout<<Nqueen(board,n,0);
}