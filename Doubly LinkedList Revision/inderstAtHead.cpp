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
    // Insert a Node at head
    void inserAtHead(int value){
        Node* new_node = new Node(value);

        // When head is Empty then we insert at head and return
        if(head==NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        // otherwise we insert at head
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
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
    dll.inserAtHead(1);
    dll.print();
    dll.inserAtHead(2);
    dll.print();
    dll.inserAtHead(3);
    dll.print();

    return 0;
}