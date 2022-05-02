#include<iostream>
using namespace std;

void PrintBoard(int board[][20],int n){
    for(int i = 0; i <n; i++){
        for(int j = 0; j <n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool Canplace(int board[][20],int n,int row,int col){
     
     //For Columns
     for(int k = 0;k <row;k++){
         if(board[k][col]==1){
             return false;
         }
     }

     //For Left Digonal
     int i=row;
     int j=col;

     while(i>=0 && j>=0){
         if(board[i][j]==1){
             return false;
         }
         i--;j--;   //This Will Check The Digonals To The Left 
     }

     //For Right Digonal
     i=row;
     j=col;

     while(i>=0 && j<n){
         if(board[i][j]==1){
             return false;
            }
            i--;j++;
        }

        return true;
}

int AllNqueen(int board[][20],int n,int row){
    //Base Case
    if(row==n){
        PrintBoard(board,n);
        return 1;
    }
    //Columns Loop
    int ways=0;
    for(int col = 0; col < n; col++)
    {
        if(Canplace(board,n,row,col))
        {
         board[row][col] = 1;
         ways += AllNqueen(board,n,row+1);
        board[row][col]=0;
        }
    }
    return ways;
}

int main(){

    int board[20][20]={0};
    cout<<"Enter The Dim Of The Board :";
    int n;
    cin>>n;

    cout<<"Ways Are :"<<AllNqueen(board,n,0)<<endl;
    
}