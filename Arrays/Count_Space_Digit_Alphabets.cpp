#include<iostream>
using namespace std;

int main(){
    int digit=0;
    int space=0;
    int alphabet=0;

    char ch;
    ch=cin.get();

    while(ch != '\n'){
       
       if(ch>='0' && ch<='9'){
            digit++;
       }
       else if((ch>='a' && ch<='z' )|| (ch>='A' && ch<='Z')){
           alphabet++;
       }
       else if(ch==' ' || ch=='\t'){
           space++;
       }
        ch=cin.get();
    }
    cout<<alphabet<<endl;
    cout<<digit<<endl;
    cout<<space<<endl;

}