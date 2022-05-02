#include<iostream>
using namespace std;

template<typename T>

//Template Vector Class
class Tvector{
    T *arr;
    int currentsize;
    int maxsize;

    public:

    Tvector(int maxsize=1){
        currentsize=0;
        maxsize=maxsize;
        arr=new int[maxsize];
    }

    void Push_Back(const T d){
        if(currentsize==maxsize){
            T *oldarr=arr;
            maxsize=2*maxsize;
            arr=new int[maxsize];

            for(int i=0;i<currentsize;i++){
                arr[i]=oldarr[i];
            }

            delete[] oldarr;
        }
        arr[currentsize]=d;
        currentsize++;
    }

    void Pop_Back(){
        if(currentsize>=0){
            currentsize--;
        }
    }

    T Front(){
        return arr[0];
    }

    T Back(){
        return arr[currentsize-1];
    }

    T operator[](int i){
        return arr[i];
    }

    int size(){
        return currentsize;
    }

    int Capacity(){
        return maxsize;
    }

};

int main(){
    Tvector<char> v;

    v.Push_Back('a');
    v.Push_Back('b');
    v.Push_Back('c');
    v.Push_Back('d');

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


}