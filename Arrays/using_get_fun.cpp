#include<iostream>
using namespace std;

int main(){

// using cin.get()-function to read the complete string...
   char sentance[100];
   char temp2=cin.get();
   int len=0;

   while(temp2 != '#'){
       sentance[len++]=temp2;
       temp2=cin.get();
   }
   sentance[len]='\0';
   cout<<sentance<<endl;
}
   
