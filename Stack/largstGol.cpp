#include<bits/stdc++.h>
using namespace std;

int LargestGold()
{
    
    int n;
    cin>>n;
    int arr[n];

    int l,b;
    cin>>l>>b;
    
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    
    vector<int> NSL(int arr[],int n)
    {

        int pseudo = -1;
        vector<int> left;
        stack<pair<int,int>> stc;

        for(int i=0;i<n;i++)
        {
            if(stc.empty()){
                left.push_back(pseudo);
            }
            else if(!stc.empty() && stc.top().first < arr[i]){
                left.push_back(stc.top().second);
            }
            else if(!stc.empty() && stc.top().first >= arr[i]){
                while(!stc.empty() && stc.top().first >= arr[i]){
                    stc.pop();
                }
                if(stc.empty()){
                    left.push_back(pseudo);
                }
                else{
                    left.push_back(stc.top().second);
                }
            }
            stc.push({arr[i],i});
        }
         return left;

    }

    vector<int> NSR(int arr[],int n){

        int pseudo = n;
        vector<int> right;
        stack<pair<int,int>> stc;

        for(int i=n-1; i >= 0; i--)
        {
            if(stc.empty()){
                right.push_back(pseudo);
            }
            else if(!stc.empty() && stc.top().first < arr[i]){
                right.push_back(stc.top().second); 
            }
            else if(!stc.empty() && stc.top().first >= arr[i])
            {
                while(!stc.empty() && stc.top().first >= arr[i]){
                    stc.pop();
                }
                if(stc.empty()){
                    right.push_back(pseudo);
                }
                else{
                    right.push_back(stc.top().second);
                }
            }
            stc.push({arr[i],i});
        }
        reverse(right.begin(),right.end());
        return right;

    }

    int MaximumAreaHistogram(int arr[], int n){
        vector<int> left=NSL(arr,n);
        vector<int> right=NSR(arr,n);
        vector<int> width;
        vector<int> area;
        int max=0;

        for(int i=0;i<n;i++){
            width.push_back(right[i]-left[i]-1);
        }
        for(int i=0;i<n;i++){
            area.push_back(arr[i]*width[i]);
        }
        for(int i=0;i<n;i++){
            if(area[i]>max){
                max=area[i];
            }
        }
        return max;
    }

    int ans=(sum-MaximumAreaHistogram(arr,n))*b;
    return ans;

}

int main(){
    
    cout<<LargestGold();
}