// Problem #3.1
// Pattern:: Traversing of a singly linked list:
// Given the head of a singly linked list, reversed the linkedlist and return the list;
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
    // insert at tail
    void insertAtTail(int value){             
        Node* new_node = new Node(value);    
        if(head==NULL){   // Linked list is empty
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
bool checkLinkedListd(Node* head1, Node* head2){
    Node* ptr1 = head1;
    Node* ptr2 = head2;

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->val!=ptr2->val){
            return false;
        }

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return (ptr1==NULL && ptr2==NULL);
}


// Node* reversLinkedList(Node* &head){
//     Node* prevptr = NULL;
//     Node* currptr = head;
//     // Move all 3 ptrs by one a head
//     while(currptr!=NULL){
//         Node* nextptr = currptr->next;
//         currptr->next = prevptr;

//         prevptr = currptr;
//         currptr = nextptr;
//     }
//     // when this loop ends, prevptr pointing to my last node which is new head
//     Node* new_head = prevptr;
//     return new_head;
// }


int main(){
    


    // LinkedList ll;
    
// ll.insertAtTail(1);L
    // ll.insertAtTail(2);
    // ll.insertAtTail(3);
    // ll.insertAtTail(4);
    // ll.insertAtTail(5);
    // ll.print();
    // ll.head = reversLinkedList(ll.head);
    // ll.print();


    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.print();

    LinkedList ll2;
    ll2.insertAtTail(1);
    ll2.insertAtTail(2);
    ll2.insertAtTail(3);;
    ll2.print();


    cout<<checkLinkedListd(ll1.head, ll2.head)<<endl;
    return 0;
}