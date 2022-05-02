#include<iostream>
using namespace std;

int main(){

    char A[][8]{
        "car",
         "bike",
         "dance",
         "stance",
         "stage"
    };

    for(int i=0;i<5;i++){
       printf("%c ", A[i][1]);
    }

}