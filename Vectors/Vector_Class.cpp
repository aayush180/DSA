#include<iostream>
using namespace std;

class Vectors
{
    int *arr;
    int currentsize;
    int maxSize;

   public: 
    Vectors(int max_size=1){
        currentsize=0;
        maxSize=max_size;
        arr=new int[maxSize];
    }

   void Push_Back(int d)
   {
       if(currentsize==maxSize)
       {
           int *oldarr=arr;
           maxSize =2*maxSize;
           arr=new int[maxSize];
           //coping from prev array to new or larger size array
           for(int i=0;i<currentsize;i++){
               arr[i]=oldarr[i];
           }

           delete [] oldarr;
       }
       arr[currentsize]=d;
       currentsize++;
   }

   void pop_Back(){
       if(currentsize>=0){
          currentsize--;
       }
   }

   int Front(){
        return arr[0];
   }

   int Back(){
       return arr[currentsize-1];
   }

   int size(){
       return currentsize;
   }

   int capacity(){
       return maxSize;
   }

   int operator[](int i){
       return arr[i];
   }

};

int main(){
    Vectors v;

    v.Push_Back(10);
    v.Push_Back(20);
    v.Push_Back(30);
    v.Push_Back(40);
    v.Push_Back(50);
    v.Push_Back(60);
    v.Push_Back(70);
    v.Push_Back(80);
    v.Push_Back(90);
    v.pop_Back();

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    
    cout<<endl;
    cout<<v.Front()<<endl;
    cout<<v.Back()<<endl;

    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }

    
   
    


}