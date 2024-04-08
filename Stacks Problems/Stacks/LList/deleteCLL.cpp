#include<iostream>     // T.C & S.C -> O(N)
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

class CircularLinkedList{
    public:

    Node* head;

    CircularLinkedList(){
        head = NULL;
    }
void print(){
    Node* temp = head;
    do
    {
        cout<<temp->val<<ends;
        temp = temp->next;
    }while(temp!=head);               // here we check that our temp ptr will be back on head;
}


void insertAtStart(int value){

    Node* new_node = new Node(value);
    if(head == NULL){
        head = new_node;
        new_node->next = head; // circular CircularLinkedList
        return;
    }

    Node* tail = head;
    while(tail->next!=head){
        tail = tail->next;
    }
    // now tail is pointing to the last node
    tail->next = new_node;  //  here new node is new head
    new_node->next = head;
    head = new_node;
}

void deleteAtStart(){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    Node* tail = head;
    while(tail->next!=head){
        tail = tail->next;
    }
    head = head->next;
    tail->next = head;
    free(temp);
}

void deleteAtEnd(){

    if(head==NULL){
        return;
    }

    Node* temp = head;
    while(temp->next->next!=head){
        temp = temp->next;
    }
    // here tail is pointing to the 2nd last node
    free(temp->next);
    temp->next = head;

    /* also
    Node* tail = tail->next;
    tail->next = head;
    free(tail);
    */
}
};


int main(){

    CircularLinkedList cll;
    cll.insertAtStart(6);
    cll.insertAtStart(5);
    cll.insertAtStart(4);
    cll.insertAtStart(3);
    cll.print();
    cll.deleteAtEnd();
    cll.print();


    return 0;
}