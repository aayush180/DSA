#include<iostream>
using namespace std;

// r=0  [][][][]
// r=1  [][][][]
// r=2  [][][][]
// r=3  [][][][]
bool Canplace(int board[][20],int n,int x,int y){
   
    //For Column
    for(int k=0;k<x;k++){
        if(board[k][y]==1){
            return false;
        }
    }

    //For Left Digonal
    int i=x;
    int j=y;
    while(i>=0 && j>=0){
        if(board[i][j]==1){
            return false;
        }
        i--; j--;
    }

    //For Right Digonal  //The i-denotes the i && the j-denotes the column
     i=x;
     j=y;
    while(i>=0 && j<n){
        if(board[i][j]==1){
            return false;
        }
        i--; j++;
    }

    return true;
    
}
void PrintBoard(int board[][20],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool Nqueen(int board[][20],int n,int i){
   //Base Case
   if(i==n){
       PrintBoard(board,n);
       return true;
   }
   //Rec solution
   for(int j=0;j<n;j++){  //In These We Are Checking All Columns In That Row
     if(Canplace(board,n,i,j)){
            board[i][j]=1;
            bool sucess=Nqueen(board,n,i+1);
            if(sucess){
                return true;
            }
            board[i][j]=0;
        }
   }
   return false;
}

int main(){
    int board[20][20]={0};
    cout<<"Enter The Size Of Board :";
    int n;
    cin>>n;
 
    Nqueen(board,n,0);
}