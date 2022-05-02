#include<iostream>
using namespace std;

int Count_Bits(int n){
    int count = 0;
    int lastbit;

    while(n>0){
        lastbit =(n&1);
        count +=lastbit;

        n=n>>1;
    }
    return count;
}

int CountBitHack(int n){
    int count=0;

    while(n>0){
        n=n&(n-1);
        count++;
    }
    return count;
}

int main(){
    cout<<CountBitHack(5);
}