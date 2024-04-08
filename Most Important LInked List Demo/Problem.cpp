#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;       // now we can add multiple nodes in our linked list

    Node(int val){
        data = val;             // yaha par data ki field mein val store ho jae gi & next mein NULL
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
            cout<<temp->data<<ends;
            temp = temp->next;
        }cout<<endl;
    }
};


int main(){

    LinkedList ll;
    
    int n = 5;
    for(int i=1; i<=n; i++){
        ll.insertAtTail(i);
    }
    // ll.insertAtTail(1);
    // ll.insertAtTail(2);
    // ll.insertAtTail(3);
    // ll.insertAtTail(4);
    // ll.insertAtTail(5);

    ll.print();

    return 0;
}