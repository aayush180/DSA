#include<iostream>
using namespace std;

void Printboard(int board[][20],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool Canplace(int board[][20],int n,int x,int y){

    //For Checking In Columns
    for(int k=0;k<x;k++){
        if(board[k][y]==1){
            return false;
        }
    }
    //For Checking In Left Digonal
    int i=x,j=y;
    while(i>=0 && j>=0){
        if(board[i][j]==1){
            return false;
        }
        i--; j--;
    }

    //For Checking In Right Digonal
    i=x,j=y;
    while(i>=0 && j<n){
        if(board[i][j]==1){
            return false;
        }
        i--;j++;
    }
    return true;
}


bool Nqueen(int board[][20],int n,int row){

    //Base Condition
    if(row==n){
        Printboard(board,n);
        return true;
    }
    //For Checking if it can place or not
    //Checking In every column
    for(int j=0;j<n;j++){
        if(Canplace(board,n,row,j)){
            board[row][j] =1;
            bool sucess=Nqueen(board,n,row+1);//Checking In The next Row 
            if(sucess){
                return true; 
            }
            board[row][j]=0;
        }
    }
    return false;
}


int main(){

    int board[20][20]={0};
    int n;
    cin>>n;

    Nqueen(board,n,0);

    
}