#include<iostream>
using namespace std;

pair<int, int>staircase(int A[100][100],int n,int m,int key){

    int i=0;
    int j=m-1;

    while(i<=n-1 && j>=0){
        if(A[i][j]==key){
            return{i,j};
        }
        else if(A[i][j] > key){
            j--;
        }
        else{
            i++;
        }
    }
    return{-1,-1}; // for key not found 
}

int main(){

    int A[100][100]{
        {1 ,2 ,3 , 4},
        {5 ,6 ,7 , 8},
        {9 ,10,11 , 12},
        {13 ,14 ,15 , 16}
    };

    int n=4,m=4;
    int key=14;


    pair<int, int> cordi=staircase(A,n,m,key);
    cout<<cordi.first<<" "<<cordi.second;
}