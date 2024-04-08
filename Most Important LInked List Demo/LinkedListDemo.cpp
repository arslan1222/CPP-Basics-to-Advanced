#include<iostream>       // Ye code bhot hi easy hai // iss mein Linked List ki insertion at head, tail & k..th Position ko insert kane ka full code hai
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        this->val = data;            // We can declare without this pointer
        this->next = NULL;
    }
};
// Insertion at head
void insertAthead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
    // cout<<"InsertAtHead"<<ends;           
}
// Insertion at tail
void insertAtTail(Node* &head, int d){
    Node* new_node = new Node(d);
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        
        temp->next = new_node;
        new_node->next = NULL;    // by default the next's value will be NULL
        // cout<<"InsertAtTail"<<ends;
}
// Insertion at K..th Position
void insertAtKthPosition(Node* &head, int position, int val){

    if(position == 0){
        insertAthead(head, val);
    }
    Node* temp = head;
    int current_pos = 0;
    while(current_pos!=position-1){
        temp = temp->next;
        current_pos++;
    }
    Node* new_node = new Node(val);
    new_node->next = temp->next;
    temp->next = new_node;
    // cout<<"InsertAtKthPosition"<<ends;
}
// Deletion of head Node
void deletAtHead(Node* &head){
    Node* temp;
    temp = head;
    head = head->next;
    free(temp);      // Free is a built in function for deletion of node
    // cout<<"deleteAtHaid"<<ends;
}
// Deletion of tail Node
void deleteAtTail(Node* &head){
    Node* second_last;       // This is the new node that will point at second last
    second_last = head;
    while(second_last->next->next!=NULL){
        second_last = second_last->next;
    }
    Node* temp; // This node will be freed
    temp = second_last->next;
    second_last->next = NULL;
    free(temp);
    // cout<<"deleteAtTail"<<ends;
}
// Delete at Kth position
void deleteAtkthPosition(Node* &head, int position){
    if(position==0){
        deletAtHead(head);
        return;
    }

    int current_pos = 0;
    Node* prev; // New node Jo position-1 Tak jae ga
    prev = head;
    while(current_pos!=position-1){
        prev = prev->next;
        current_pos++;
    }

    
    Node* temp;  // This Node will be deleted
    temp = prev->next;
    prev = prev->next->next;
    temp->next = NULL;
    // cout<<"deleteAtkthPosition"<<ends;
}
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<ends;
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    Node* node1 = new Node(10);
    Node* head(node1);
    
    print(head);
    insertAthead(head,20);
    print(head);
    insertAtTail(head, 30);
    print(head);
    insertAtKthPosition(head, 2, 15);
    print(head);
    // deletAtHead(head);
    // print(head);
    // deleteAtTail(head);
    // print(head);
    deleteAtkthPosition(head, 2);
    print(head);
    // insertAthead(head,30);
    // print(head);
    // cout<<node1->val<<" "<<node1->next<<endl;

    return 0;
}