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

    // inser at Kth position
    void insertAtKthPos(int value, int pos){
   
        Node* temp = head;
        int count = 1; // here we can start from 1 
        while(count<(pos-1)){
            temp = temp->next;
            count++;
        }
        // temp will pointing to the nose at (k-1)th position
        Node* new_node = new Node(value);
        new_node->next = temp->next;
        temp->next = new_node;

        new_node->next = temp;
        new_node->next->prev = new_node;
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
    dll.inserAtHead(5);
    dll.print();
    dll.inserAtHead(3);
    dll.print();
    dll.inserAtHead(2);
    dll.print();
    dll.inserAtHead(1);
    dll.print();
    dll.insertAtKthPos(3, 2);
    dll.print();

    return 0;
}