#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Compare(string a, string b){
    if(a.length() == b.length()){
        return a<b;//Lexographical Order 
    }
    return a.length()<b.length();
}

void Sortedsu(char *input, char *output,int i,int j,vector<string>&list){
   if(input[i]=='\0'){
       output[j]='\0';
       string temp(output);
       list.push_back(temp);
       return;
   }    
   output[j]=input[i];
   Sortedsu(input,output,i+1,j+1,list);
   Sortedsu(input,output,i+1,j,list);
}

int main(){
    char input[100];
    char output[100];
    vector<string> list;

    cin>>input;
    Sortedsu(input,output,0,0,list);
    sort(list.begin(),list.end(),Compare);

    for(auto s:list){
        cout<<s<<" ";
    }
}