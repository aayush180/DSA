#include<iostream>
using namespace std;

void Printboard(int Mat[][9],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<Mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool Canplace(int Mat[][9],int n,int i,int j,int nu){
    //Checking For The Row And Column 
    for(int k=0;k<n;k++){
        if(Mat[k][j]==nu || Mat[i][k]==nu){
            return false;
        }
    }

    // Checking In The Remaning Subproblem
    int sx=(i/3)*3;
    int sy=(j/3)*3;

    for(int x=sx;x<sx+3;x++){
        for(int y=sy;y<sy+3;y++){
            if(Mat[x][y]==nu){
                return false;
            }
        }
    }
    return true;
}


bool SudokuSolver(int Mat[][9],int n,int i,int j){
    //Base Case
    if(i==n){
        Printboard(Mat,n);
        return true;
    }
    //Other Cases
    if(j==n){
        return SudokuSolver(Mat,n,i+1,0);
    }
    //If That Block is Already Filled 
    if(Mat[i][j] != 0){
        return SudokuSolver(Mat,n,i,j+1);
    }
    //Else We Have To Fill That Block
    //We use The loop for Checking all the no
    for(int no=1;no<=n;no++){
        if(Canplace(Mat,n,i,j,no)){
            Mat[i][j] =no;
            bool Subproblem=SudokuSolver(Mat,n,i,j+1);

            if(Subproblem){
                return true;
            }
        }
    }
    Mat[i][j] =0;
    return false;
}

int main(){


    int n=9;
    int Mat[9][9]={
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };

    SudokuSolver(Mat,n,0,0);
    

}