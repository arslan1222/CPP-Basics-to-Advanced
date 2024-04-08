// Doubly Linked_List Basics deletion
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

// Gives length of linked list
int getLength(Node* &head){
    Node* temp = head;
    int length = 0;
    while(temp!=NULL){
        length++;
        temp = temp->next;
    }
    return length;
}
// insert a new node at head
// if we have an Empty Linked List
void insertAtHead(Node* &head, int value){
    if(head == NULL){
        Node* temp = new Node(value);
        head = temp;
    }
    else{
        Node* temp = new Node(value);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
// indert a new node at tail
void insertAtTail(Node* &tail, int value){
    if(tail == NULL){
        Node* temp = new Node(value);
        tail = temp;
    }
    else{
        Node* temp = new Node(value);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtKthPosition(Node* tail, Node* &head, int position, int value){

    if(position == 1){
        insertAtHead(head, value);
        return;
    }
    
    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(tail, value);
        return;
    }
    
    // Creating a node for Kth positon
    Node* new_node = new Node(value);

    new_node->next = temp->next;
    temp->next->prev = new_node;
    temp->next = new_node;
    new_node->prev = temp;
    
}
// Traversing the linked list
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<ends;
        temp = temp->next;
    }
    cout<<endl;
}
int main(){

    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    cout<<getLength(head)<<endl;
    insertAtHead(head, 8);
    insertAtHead(head, 9);
    print(head);
    insertAtTail(tail, 11);
    print(tail);
    // insertAtKthPosition(tail, head, 3, 13);
    // print(head);
    // insertAtKthPosition(tail, head, 6, 14);
    // print(head);

    return 0;
}