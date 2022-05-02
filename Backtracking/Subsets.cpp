#include<iostream>
using namespace std;

void Subse(char *input,char *output,int i,int j){
    //Base Case
    if(input[i]=='\0'){
        output[j]='\0';
        cout<<output<<" ";
        return;
    }
    output[j]=input[i];
    Subse(input,output,i+1,j+1);
    Subse(input,output,i+1,j);
}


int main(){
    char input[100];
    char output[100];

    cin>>input;
    Subse(input,output,0,0);
}