#include<iostream> // Revision class  // Print in the Reverse element of LinkedList
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
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
        Node* new_node = new Node(value);
        if(head == NULL){
            head = new_node;
            return;
        }
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
      // Yaha pr hum print fun k Andar (Node* &head) iss liye nhi de rahay bcz ye hamari linkedlist class k ander hai agar ye class k Bahir hota tu hum ne head as a parameter dena tha jis tra pichle lectures mein krte Ay Rhay hain
        void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }cout<<endl;
    }
};
void reversePrint(Node* &head){
    // base Case
    if(head == NULL){
        return;
    }
    // Assumption
    reversePrint(head->next);
    cout<<head->data<<ends;
}

int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.print();
    reversePrint(ll.head);
}

