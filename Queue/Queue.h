
class Queue{
    int * arr;
    int cs;
    int ms;
    int front;
    int rear;

    public:
    Queue(int def_size=5)
    {
         ms=def_size;
         arr=new int[ms];
         cs=0;
         front=0;
         rear=ms-1;
    }

    bool Full(){
        return cs==ms;
    }

    void PushQ(int data){
        if(!Full()){
           rear=(rear+1)%ms;
           arr[rear]=data;
           cs++;
        }
    }

    bool EmptyQ(){
         return cs==0;
    }

    void PopQ(){
        if(!EmptyQ()){
            front=(front+1)%ms;
            cs--;
        }
    }

    int FrontQ(){
        return arr[front];
    }

};