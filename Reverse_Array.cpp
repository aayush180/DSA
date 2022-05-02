#include<iostream>
using namespace std;

void ReverseArray(int A[],int n){
     int low=0;
     int high=n-1;

     while(low<high){
         swap(A[low],A[high]);
         low++;
         high--;
     }

}
void PrintArray(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}
int main(){
    int A[]={10,8,6,4,2,1};
    int n=sizeof(A)/sizeof(int);

    PrintArray(A,n);
    cout<<endl;
    ReverseArray(A,n);
    PrintArray(A,n);


}