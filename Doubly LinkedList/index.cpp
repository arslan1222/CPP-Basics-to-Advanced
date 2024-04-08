// Doubly Linked_List Basics
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
void insertAtHead(Node* &head, int value){
    Node* temp = new Node(value);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
// indert a new node at tail
void insertAtTail(Node* &tail, int value){
    Node* temp = new Node(value);
    tail->next = temp;
    temp->prev = tail;
    temp = tail;
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
// deletion of a node at head
void deltionDLLAtHead(Node* &head){
    Node* temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    temp->next = NULL;
    free(temp);
}
// // Deletion at tail
void deltionDLLAtTail(Node* &head){
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->prev->next = NULL;
    temp->prev = NULL;
    free(temp);
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
    Node* node1 = new Node(10);
    Node* head(node1);
    Node* tail(node1);
    cout<<getLength(head)<<endl;
    insertAtHead(head, 9);
    print(head);
    insertAtTail(tail, 11);
    print(head);
    insertAtKthPosition(tail, head, 3, 13);
    print(head);
    insertAtKthPosition(tail, head, 3, 14);
    print(head);
    deltionDLLAtHead(head);
    print(head);
    deltionDLLAtTail(head);
    print(head);

    return 0;
}