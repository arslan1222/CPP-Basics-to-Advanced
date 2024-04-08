#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
}


void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}


void intertAtnth(Node* &head, int position, int d){
    Node* temp = head;
    int count = 1;

    while(count < position-1){
        temp = temp->next;
        count++;    
        }
        // creating a node for d
        Node* nodeToInsert = new Node(d);

        nodeToInsert->next = temp->next;
        temp -> next = nodeToInsert;
}

void print(Node* &head){
        Node* temp = head;
        while (temp!= NULL){
            cout<<temp->data<<ends;
            temp = temp->next;
        }
}
int main(){

    Node* node1 = new Node(10);
    // cout<< node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head(node1);
    Node* tail(node1);

    insertAtHead(head, 20);
    intertAtnth(head, 3, 50);
    // print(head);
    insertAtTail(tail, 26);
    insertAtTail(tail, 27);
    insertAtTail(tail, 28);
    print(head);
    return 0;
}