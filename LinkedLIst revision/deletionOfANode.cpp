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

    // deletion of a node at head
    void deletionOfANode(Node* &head){
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    // deletion of a Node at tail
    void deletionOfNodeAtTail(Node* &head){
        Node* second_last = head;

        while(second_last->next->next!=NULL){
            second_last = second_last->next;
        }
        Node* temp = second_last->next;
        second_last->next = NULL;
        free(temp);
    }

    // deletion of node at Kth position
    void deletionOfNodeAtKPosition(Node* &head, int pos){
        Node* prev = head;
        int curr_pos = 0;
        while(curr_pos!=pos-1){
            prev = prev->next;
            curr_pos++;
        }
        Node* temp = prev->next;
        prev->next = prev->next->next;
        free(temp);
    }

    // Here we traverse a linked list  (print Function)
    void print(Node* &head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<ends;
            temp = temp->next;
        }cout<<endl;
    }

int main(){                   // Time Complexity will be O(N)

    Node* head = NULL; 
    insertAtHead(head, 1);  // insert at head
    print(head);
    insertAtHead(head, 2);
    print(head);
    insertAtTail(head, 3);   // insert at tail
    print(head); 
    insertAtTail(head, 4);   //  insert a tail
    print(head);
    insertatkthPosition(head, 3, 10);  // insert at Kth position 
    print(head);
    deletionOfANode(head);     // deletion of Node at head
    print(head);
    deletionOfNodeAtTail(head);  // deletion of a node at tail
    print(head);
    deletionOfNodeAtKPosition(head, 2);   // deletion at Kth Position
    print(head);

    return 0;
}