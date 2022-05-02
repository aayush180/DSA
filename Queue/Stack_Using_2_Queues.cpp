#include<bits/stdc++.h>
using namespace std;

class Stack
{
    queue<int> q1,q2;
    public:
    void PushS(int d){
        //We Always Push In Non Empty Queue
        if(!q1.empty()){
            q1.push(d);
        }
        else{
            q2.push(d);
        }
    }

    void PopS(){
        if(q1.empty()){
            //We Have To Push From q2 to q1
            while(!q2.empty()){
                int front=q2.front();
                q2.pop();

                if(q2.empty()){
                    break;
                }
                q1.push(front);
            }
        }
        else{
            //Q2 is Empty we have to push from q1 to Q2
            while(!q1.empty()){
                int front=q1.front();
                q1.pop();

                if(q1.empty()){
                    break;
                }
                q2.push(front);
            }
        }
    }

    int TopS(){
        if(q1.empty()){
            while(!q2.empty()){
                int front=q2.front();
                q2.pop();
                q1.push(front);
                if(q2.empty()){
                    return front;
                }
            }
        }
        else{
            //Q2 is Empty
            while(!q1.empty()){
                int front=q1.front();
                q1.pop();
                q2.push(front);
                if(q1.empty()){
                    return front;
                }
            }
        }
    }

    bool Isempty(){
        return q1.empty() && q2.empty();
    }
};

int main(){
    Stack s;
    s.PushS(10);
    s.PushS(20);
    s.PushS(30);
    s.PushS(40);

    s.PopS();

    cout<<s.TopS()<<endl;

    while(!s.Isempty()){
        cout<<s.TopS()<<" ";
        s.PopS();
    }

    
}