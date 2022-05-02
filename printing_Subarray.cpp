#include<iostream>
using namespace std;

int Max(int *x,int *y) {
    if(*x > *y){
        return *x;
    }
    else{
        return *y;
    }
}
//Brute Force Solution for maximum sumsubarray-O(n^3)
int largestSumSubarr(int A[],int n)
{
    int i,j,k;
    int largest_sum=0;

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            int currentsum=0;

            for(k=i;k<=j;k++){
                currentsum += A[k];
            }
            largest_sum=Max(&largest_sum,&currentsum);
        }
    }
    return largest_sum;
}
//Optimal solution for Maximum sumsubarray-O(n^2)
int largestSumSubarr2(int A[],int n)
{
    int i,j,k;
    int largest_sum=0;

    for(i=0;i<n;i++){
         int currentsum=0;
        for(j=i;j<n;j++){
           currentsum += A[j];
           largest_sum=Max(&largest_sum,&currentsum);
        }
        
    }
    return largest_sum;
}

//Best solution for Maximum sumsubarray-(Kadanes_Algorithm)--O(n)and space is-O(1)
int largestSumSubarr3(int A[],int n)
{
    int cs=0;
    int largest_sum=0;

    for(int i=0;i<n;i++){
        cs += A[i];

        if(cs<0){
            cs=0;
        }
        largest_sum=Max(&largest_sum,&cs);
    }
    return largest_sum;
}
int main(){
    int A[]={-2,3,4-1,5,-12,6,1,3};
    int n=sizeof(A)/sizeof(int);

    printf("%d ",largestSumSubarr3(A,n));
}