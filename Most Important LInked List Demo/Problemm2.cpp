// Problem #2
// Pattern:: Deleting element from a singly linked list:
// Given the head of a sorted linked list delete all duplicates such that each element appears only once. Return the linkedlist sorted as well.
#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int value){             
        Node* new_node = new Node(value);    // jab hamari Linked list empty hai tu hum start mein apni new value initial karvalein gay
        if(head==NULL){   // Linkrd list is empty
            head = new_node;
            return;
        }

        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;    // till the node end we will move temp pointer ahead
        }
        temp->next = new_node;
    }
    

    void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<ends;
            temp = temp->next;
        }cout<<endl;
    }
};

// Function for alternate positions
    void deleteAlternateNode(Node* &head){
    Node* curr_node = head;
    while(curr_node!=NULL && curr_node->next!=NULL){
        Node* temp = curr_node->next;   // This node will be deleted
        curr_node->next = curr_node->next->next;
        free(temp);
        curr_node = curr_node->next;
    }
}

// FUnction for remove Duplicate Node
void deleteDublicateNode(Node* &head){
    Node* curr_node = head;
    while(curr_node){
        while(curr_node->next!=NULL && curr_node->val==curr_node->next->val){
            //Delete cuur->next
            Node* temp = curr_node->next;
            curr_node->next = curr_node->next->next;
            free(temp);
        }
        // This node ends when current node and next node values are different
        // Or linkedlist ends
        curr_node = curr_node->next;
    }
}

int main(){

    LinkedList ll;
    
    // int n = 5;
    // for(int i=1; i<=n; i++){
    //     ll.insertAtTail(i);
    // }
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);

    ll.print();

    // deleteAlternateNode(ll.head);
    // ll.print();

    deleteDublicateNode(ll.head);
    ll.print();

    return 0;
}