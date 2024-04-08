#include<iostream>    // Stacks using Arrays
using namespace std;
class Stack{
    int capacity;          // size of stack
    int* arr;
    int top;

    public:
    // constructor for Stacks
    Stack(int c){
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    // push values
    void push(int data){
        // if stacks full then overflow hit
        // Or if(top >= this->capacity); 
        if(this->top == this->capacity-1){       // stack start from 0
            cout<<"Overflow"<<endl;
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }
    void pop(){
        if(this->top == -1){
            cout<<"Underflow"<<endl;
            return;
        }
        this->top--;
    }
    void topEle(){
        if(this->top == -1){
            cout<<"Underflow"<<endl;
            return;
        }
        cout<<this->arr[this->top]<<endl;
    }

    bool isEmpty(){
        return this->top == -1;   // top is equal to -1 then stack is empty
    }
    int size(){
        return this->top + 1;     
    }
    bool isFull(){
        return this->top == capacity - 1;    
    }

};

int main(){
    Stack st(5);
    st.push(1);
    st.topEle();
    st.push(2);
    st.topEle();
    st.push(3);
    st.topEle();
    st.push(4);
    st.topEle();
    st.push(5);
    st.topEle();
    st.push(6);
    st.push(7);
    st.pop();
    st.pop();
    st.pop();
    st.push(8);
    st.topEle();
    st.size();




    // st.topEle();
    

    return 0;
}