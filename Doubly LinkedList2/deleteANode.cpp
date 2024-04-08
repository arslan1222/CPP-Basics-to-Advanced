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
    // insert a node at head
     void insertAtHead(int value){
        Node* new_node = new Node(value);

        if(head==NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }
    // insert at Tail Position
    void insertAtTail(int value){
        Node* new_node = new Node(value);

        if(tail==NULL){
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }
    // insert at K.th Position
    void insertAtKthPosition(int value, int k){
        Node* temp = head;
        int count = 1;
        while(count!=(k-1)){
            temp = temp->next;
            count++;
        }

        Node* new_node = new Node(value);
        new_node->next = temp->next;
        temp->next = new_node;

        temp->next->prev = new_node;
        new_node->prev = temp;
        return;

    }
    // delete a node at head
    void deleteAtHead(){

        if(head==NULL){
            return;
        }
        Node* temp = head;
        head = head->next;

        if(head==NULL){
            tail = NULL;
        }else{
            head->prev = NULL;
        }
        free(temp);
    }
    // delete a node at tail
    void deleteAtTail(){
        Node* temp = tail;
        tail = tail->prev;

        if(tail==NULL){
            head = NULL;
        }else{
            tail->next = NULL;
        }
        free(temp);
    }
    // Delete a node at Kth position
    void deleteAtKthPosition(int k){
        Node* temp = head;
        int count = 1;
        while(count!=k-1){
            temp = temp->next;
            count++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
    // displayong the linked list
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

    // dll.insertAtHead(1);  // insertion at head
    // dll.print();
    // dll.insertAtHead(2);
    // dll.print();
    // dll.insertAtHead(3);
    // dll.print();
    dll.insertAtTail(4);  // insertion at tail 
    dll.print();
    dll.insertAtTail(5);
    dll.print();
    dll.insertAtTail(6);
    dll.print();
    dll.insertAtKthPosition(7,3); // insert at Kth Position
    dll.print();
    dll.deleteAtHead();  // deletion of head Node
    dll.print();
    dll.insertAtTail(10);
    dll.print();
    dll.deleteAtTail();
    dll.print();
    dll.insertAtTail(9);
    dll.deleteAtKthPosition(3);
    dll.print();
    dll.deleteAtTail();
    dll.print();



    return 0;
}