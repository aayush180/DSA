#include<iostream>
#include<vector>
using namespace std;

void Merge(vector<int>& v,int s,int e){
    int i=s;
    int mid=(s+e)/2;
    int j=mid+1;
    vector<int> temp;

    while(i<=mid && j<=e){
        if(v[i]<v[j]){
            temp.push_back(v[i++]);
        }
        else{
            temp.push_back(v[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(v[i++]);
    }
    while(j<=e){
        temp.push_back(v[j++]);
    }
    int k=0;
    for(int ind=s;ind<=e;ind++){
        v[ind]=temp[k++];
    }
    
}

void Mergesort(vector<int> &arr,int s,int e){
     if(s>=e){
         return;
     }
     int mid=(s+e)/2;
     Mergesort(arr,s,mid);
     Mergesort(arr,mid+1,e);
     return Merge(arr,s,e);
}




int main(){

    vector<int> arr={4,2,8,1,6,3};
    int s=0;
    int e=arr.size()-1;

    Mergesort(arr,s,e);

    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }


}