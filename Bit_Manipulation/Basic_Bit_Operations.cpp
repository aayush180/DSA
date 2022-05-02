#include<iostream>
using namespace std;


int Get_Bit(int n,int i){
    int mask=(1<<i);
    return (n&mask)>0?1:0;
}

void set_Bit(int &n,int i){
    int mask=(1<<i);
    n=n|mask;
}

void Clear_Bit(int &n,int i){
    int mask=~(1<<i);
    n=n&mask;
}


void Update_Bit(int &n,int i,int ele){
    Clear_Bit(n,i);
    int mask=(1<<i);
    n=n|mask;
}

//clear last ith bits
void Clearithbits(int &n,int i){
    int mask=(-1<<i);
    n=n&mask;
}

//Clear The list of bits
void Clear_List(int &n,int i,int j){
     int a=~(0)<<(j+1);
     int b=(1<<i)-1;
     int mask=a|b;
     n=n&mask;
}

void ReplaceBit(int &n,int i,int j,int m){
    Clear_List(n,i,j);
    int mask=(m<<i);
    n=n|mask;
}

int main(){

    int n=31;
    int i=1;
    int j=3;
    int m=2;

    ReplaceBit(n,i,j,m);
    cout<<n;

}