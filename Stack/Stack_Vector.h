#include<iostream>
#include<vector>
using namespace std;

template <typename T>
class VStack{

    public:
    vector<T> vst;

    void Push(T d){
        vst.push_back(d);
    }

    void Pop(){
        vst.pop_back();
    }

    T Top(){
        int ind=vst.size()-1;
        return vst[ind];
    }

    bool IsEmpty(){
        return vst.size()==0;
    }

};


