#include<bits/stdc++.h>
using namespace std;


void Merge(int arr[],int low,int mid,int high){
    int i=low,j=mid+1,k=low;
    int arr2[50];

    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            arr2[k++]=arr[i++];
        }
        else{
            arr2[k++]=arr[j++];
        }
    }
    for(;i<=mid;i++){
        arr2[k++]=arr[i];
    }
    for(;j<=high;j++){
        arr2[k++]=arr[j];
    }
    for(int i=low;i<=high;i++){
        arr[i]=arr2[i];
    }
}

void IMerge(int A[],int n){
    int p,i,low,mid,high;

    for(p=2;p<=n;p=p*2){
        for(i=0;i+p-1<n;i=i+p){
            low=i;
            high=i+p-1;
            mid=(low+high)/2;
            Merge(A,low,mid,high);
        }
    }
    if(p/2<n){
        Merge(A,0,p/2-1,n);
    }
}

int FindkSmallest(int arr[],int n,int k){

    IMerge(arr,n);
    return arr[k-1];
}




void Print(int arr[],int n){
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}



int main(){

    int arr[]={4,1,7,5,2};
    int n=sizeof(arr)/sizeof(int);
    int k=3;
    int mid=n/2;

    IMerge(arr,n);
    Print(arr,n);



    
}