// Basics of Doubly LL.
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }

};

class DoublyLinkedList{
public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
    

};

int main(){

    Node* new_node = new Node(3);

    DoublyLinkedList dll;
    dll.head = new_node;
    dll.tail = new_node;
    cout<<dll.head->data<<endl;

    return 0;
}