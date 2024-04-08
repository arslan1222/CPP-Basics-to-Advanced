#include<iostream>
#include<vector>
using namespace std;

class Queue{
    int front;
    int back;
    vector <int> v;
public:

    Queue(){
        this->front = -1;
        this->back = -1;
    }

    void enqueue(int data){

        this->v.push_back(data);
        this->back++;
        if(this->back == 0) this->front = 0;
    }

    void dequeue(){
        if(this->front == this->back){
            this->front = -1;
            this->back = -1;
        }
        else{
            this->front++;
        }
    }

    int getFront(){
        if(this->front == -1){ 
            return -1;
        }else{
            return this->v[this->front];
        }
    }

    bool isEmpty(){
        return this->front == -1;
    }

};

int main(){

    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.dequeue();
    qu.enqueue(40);

    while(not qu.isEmpty()){
        cout<<qu.getFront()<<ends;
        qu.dequeue();
    }
    return 0;
}