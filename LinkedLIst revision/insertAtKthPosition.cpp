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

// insert a new node at tail
    void insertAtTail(Node* &head, int value){
        Node* new_node = new Node(value);

        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }

    // insert at Kth Position
    void insertatkthPosition(Node* &head, int position, int value){

        if(position==0){
            insertAtHead(head, value);
            return;
        }

        Node* new_node = new Node(value);

        Node* temp = head;
        int curr_pos = 0;
        while(curr_pos!=(position-1)){
            temp = temp->next;
            curr_pos++;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }

    // Here we traverse a linked list
    void print(Node* &head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<ends;
            temp = temp->next;
        }cout<<endl;
    }

int main(){                   // Time Complexity will be O(N)

    Node* head = NULL;
    insertAtHead(head, 1);
    print(head);
    insertAtHead(head, 2);
    print(head);
    insertAtTail(head, 3);
    print(head);
    insertAtTail(head, 4);
    print(head);
    insertatkthPosition(head, 3, 10);
    print(head);

    return 0;
}