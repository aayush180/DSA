#include<iostream>
using namespace std;

void SpiralPrint(int A[][4],int n,int m){
    
    int startrow=0;
    int endrow=n-1;
    int startcolumn=0;
    int endcolumn=m-1;

    while(startrow<=endrow && startcolumn<=endcolumn){

        //start  Row
        for(int col=startcolumn; col<=endcolumn;col++){
            cout<<A[startrow][col]<<" ";
        }

        //end column
        for(int row=startrow+1;row<=endrow;row++){
            cout<<A[row][endcolumn]<<" ";
        }

        //End  row
        for(int col=endcolumn-1;col>=startcolumn;col--){
            if(startrow==endrow){
                break;
            }
            cout<<A[endrow][col]<<" ";
        }

        //start column
        for(int row=endrow-1;row>=startrow+1;row--){
            if(startcolumn==endcolumn){
                break;
            }
            cout<<A[row][startcolumn]<<" ";
        }
        
        startrow++;
        endrow--;
        startcolumn++;
        endcolumn--;

    }
}

void waveprint(int A[100][100],int n,int m)
{

    int row=0;
    int column=m-1;
    int wave=1;

    //wave 1->print downwords
    //wave 0->print upwords
    while(column>=0 && row<=n-1){
    if(wave==1){
        for(int row=0;row<=n-1;row++){
            cout<<A[row][column]<<" ";
        }
        column--;
        wave=0;
    }
    else{
        for(int row=n-1;row>=0;row--){
            cout<<A[row][column]<<" ";
        }
        column--;
        wave=1;
    }
    }
}


int main(){

    int A[100][100]{{1,2,3,4},
                    {5,6,7,8},
                   {9,10,11,12},
                  {13,14,15,16}};

    int n=4,m=4;
    
    waveprint(A,n,m);

}