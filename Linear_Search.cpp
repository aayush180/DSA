#include<iostream>
using namespace std;

int  LinearSearch(int A[],int n,int key){
     for(int i=0;i<n;i++){
         if(A[i]==key){
             return i;
         }
     }
     return -1;
     
}

int BinarySearch(int A[],int n,int key){
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;

    while(low<high){
        if(key==A[mid]){
            return mid;
        }
        else if(key > A[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

void PrintArr(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}

int main(){
    int A[]={};
    int n=6;
    int key;
    cout<<"Enter The Key ";
    cin>>key;

    int ans=BinarySearch(A,n,key);
    
    if(ans != -1){
        cout<<key<<" Is found at index "<<ans<<endl;
    }
    else{
        cout<<key<<" is not found "<<endl;
    }


}