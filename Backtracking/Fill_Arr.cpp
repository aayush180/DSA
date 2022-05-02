#include<iostream>
using namespace std;

void PrintArray(int *array, int n){
    for(int i = 0; i < n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void Fillarray(int *array,int n,int i,int val){
    if(i==n){
        PrintArray(array,n);
        return;
    }

    array[i] = val;
    Fillarray(array,n,i+1,val+1);
    //Backtracking Step
    array[i] =-1*array[i];

}

int main(){
    int array[50];
    cout<<"Enter The No :";
    int n;
    cin>>n;

    Fillarray(array,n,0,1);
    PrintArray(array,n);

}



