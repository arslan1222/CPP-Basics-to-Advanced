#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data = val;
        this->next = NULL;
    }
};
class Stack{
    Node* head;
    int capacity;
    int currSize;
    public:
    Stack(int val){
        this->capacity = val;
        this->currSize = 0;
        head = NULL;
    }

    // bool isEmpty(){
    //     return this->head == NULL;
    // }

    // bool isFull(){
    //     return this->head == this->capacity;
    // }

    void push(int val){
        if(this->currSize == this->capacity){    // if stack is full simply show the overflow
            cout<<"Overflow"<<endl;
            return;
        }  
        Node* new_node = new Node(val);
        new_node->next = this->head;
        this->head = new_node;
        this->currSize++;
    }

    int pop(){
        int n = -1;
        if(this->head == NULL){
            cout<<"Underflow"<<endl;
            return n;
        }
        Node* new_head = this->head->next;   // new_head will point to 2nd Node
        this->head->next = NULL;
        Node* temp = this->head;
        int result = temp->data;
        this->head = new_head;
        // free(temp);
        delete temp;
        this->head = new_head;
        return result;
        // cout<<result<<endl;
    }

    void topEle(){
        if(this->head == NULL){
            cout<<"Underflow"<<endl;
            return;
        }
        cout<<this->head->data<<endl;
    }

    int size(){
        return this->currSize;
    }
};
int main(){

    Stack st(5);
    st.pop();
    st.push(1);
    // st.topEle();
    // st.push(2);
    // st.pop();
    // st.push(3);
    // st.topEle();
    // st.pop();
    // st.push(4);
    // st.topEle();
    // st.push(5);
    // st.topEle();
    // // st.push(7);
    // st.pop();
    st.push(4);
    st.push(9);
    st.topEle();
    st.pop();
    st.pop();
    st.pop();
    st.pop();





    
    return 0;
}