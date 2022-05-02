#include<bits/stdc++.h>
using namespace std;

int RodCutting(int price[],int n)
{
    int length[n];
    //Initalizing The Lenght Array
    for(int i=0;i<=n;i++){
        length[i] = i+1;
    }
    int size=sizeof(length)/sizeof(int);
    int arr[n+1][size+1];
    //For Initalizing The 0th Row And Column
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=size;j++){
            if(i==0 || j==0){
                arr[i][j] =0;
            }
        }
    }
    //For Initalizing The Remaning Array
    for(int i=1;i<=n;i++){
        for(int j=1;j<=size;j++){
            if(length[i-1]<=j){
                arr[i][j]=max((price[i-1]+arr[i][j-length[i-1]]),arr[i-1][j]);
            }
            else{
                arr[i][j]=arr[i-1][j];
            }
        }
    }

    return arr[n][size];

}

int main(){
    //           1 2 3 4 5  6  7  8
    int price[]={1,5,8,9,10,17,17,20};
    int n=sizeof(price)/sizeof(int);

    cout<<RodCutting(price,n);

}