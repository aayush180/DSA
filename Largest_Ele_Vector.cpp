#include<iostream>
#include<vector>
using namespace std;

int main(){
    int max=0;
    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    printf("%d ",max);

    

}