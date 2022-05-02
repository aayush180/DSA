#include<iostream>
using namespace std;

int BinarySearch(int A[],int n,int key){
    int low=0;
    int high=n-1;

    while(low<=high){
          int mid=(low+high)/2;
        if(key==A[mid]){
            return mid;
        }
        else if(A[mid] > key){
            high=mid-1;
        }
        else{
            low=mid+1;
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
    int A[]={1,3,5,6,7,10};
    int n=sizeof(A)/sizeof(int);

    int key;
    cout<<"Enter The Key :";
    cin>>key;

    int ans = BinarySearch(A,n,key);
    if(ans!=-1){
        cout<<key<<" Is found at index "<<ans<<endl;
    }
    else{
        cout<<"Element is not found "<<endl;
    }
    
    
}