#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
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
    // Insert a Node at tail
    void inserAtTail(int value){
        Node* new_node = new Node(value);

        // When head is Empty then we insert at head and return
        if(tail==NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        // otherwise we insert at head
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }

    // display the Doubly Linked List Values
void print(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<ends;
        temp = temp->next;
    }
    cout<<endl;
}
};


int main(){

    DoublyLinkedList dll;
    dll.inserAtTail(1);
    dll.print();
    dll.inserAtTail(2);
    dll.print();
    dll.inserAtTail(3);
    dll.print();

    return 0;
}