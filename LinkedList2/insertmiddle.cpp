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

// insert at head
void insertAtHead(Node* &head, int d){
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
}

// insert at tail
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp = tail;
}
// insert at middle
void insertAtnth(Node* &nth, int position, int d){
    // void insertAtnth(Node* &tial, Node* &nth, int position, int d){ // <--> end par nth node insert karne k liye


    if(position == 1){               // pehli position par nth wala node dalne k liye
        insertAtHead(nth, d);
        return;
    }
    Node* temp = nth;
    int count = 1;

    // Ye code end par node insert krne k liye hai but abhi error de rha hai
    // if(temp->next == NULL){
    //     insertAtnth(tail, d);
    //     return;
    // }

    while(count!=position-1){
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
        cout<<endl;
}

int main(){  // Bilkul easy hai samjne main

    Node* node1 = new Node(10);
    Node* head(node1);          // ye object hai head par node insert krne liye hai
    Node* nth(node1);           // ye object hai nth par node insert krne liye hai
    Node* tail(node1);          // ye object hai tail par node insert krne liye hai
    print(head);                // print function call ho raha hai
    insertAtHead(head, 20);     // insertAtHead call ho raha hai. 20 ek new node hai jo head pr A jae ga
    print(head);                // print function call ho raha hai
    insertAtTail(tail, 30);     // tail par node insert krne liye hai
    print(tail);
    insertAtnth(nth, 2, 40);    // intertAtnth call ho raha hai   // nth -> head hai, 2 -> Position hai, 50 value hai
    // insertAtnth(tial, nth, 3, 40);     //  <-->  // end par nth node insert karne k liye
    print(nth);                 // print function call ho raha hai
    // print(tail);             // intertAtnth call ho raha hai


    return 0;
}