#include<iostream>
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

void insertAthead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;           
}
void insertAtTail(Node* &head, int d){
    Node* new_node = new Node(d);
        Node* temp = head;
        while(temp!=NULL){
            temp = temp->next;
            }
            new_node->next = temp;
            temp = new_node;
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
    // Node* tail(node1);
    print(head);

    // insertAthead(head, 20);
    // print(head);

    // Node* head = NULL;
    insertAthead(head,20);
    print(head);
    insertAtTail(head, 30);
    print(head);
    // insertAthead(head,30);
    // print(head);

    // cout<<node1->val<<" "<<node1->next<<endl;

    return 0;
}