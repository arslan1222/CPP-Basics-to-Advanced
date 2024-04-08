#include<iostream> // Revision class
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
// insert a new node at head
    void insertAtHead(Node* &head, int value){
        Node* new_node = new Node(value);

        new_node->next = head;
        head = new_node;
    }

    // Here we traverse a linked list
    void print(Node* &head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<ends;
            temp = temp->next;
        }cout<<endl;
    }

int main(){                           // Time Complexity -> O(N)
           
    Node* head = NULL;
    insertAtHead(head, 1);
    print(head);
    insertAtHead(head, 2);
    print(head);


    return 0;
}