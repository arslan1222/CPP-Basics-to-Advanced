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
    //destructor
    ~Node(){
        int value = this->data;
        // memory free
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};

// insert at head
void insertAtHead(Node* &head, int d){
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
        cout<<"Insert at head: ";
}

// insert at tail
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp = temp->next;
    cout<<"Insert at tail: "; 
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
        cout<<endl;
}

// delete a node
void deltetionOfNode(int position, Node* &head){
    if(position==1){
        Node* temp = head;
        head = head->next;
        // memory free start node
        temp->next = NULL;
        cout<<"Delete at head: ";
        delete temp;
    }
    else{
        // deletion aof any middle node or last node
        Node* curr = head; //new Node
        Node* prev = NULL; //new Node

        // delete a node by position
    cout<<"Delete at kth position: ";
        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        curr->next= NULL;
        delete curr;
    }
}



int main(){  // Bilkul easy hai samjne main

    Node* node1 = new Node(10);
    Node* head(node1);          // ye object hai head par node insert krne liye hai
    Node* nth(node1);           // ye object hai nth par node insert krne liye hai
    Node* tail(node1);          // ye object hai tail par node insert krne liye hai
    print(head);                // print function call ho raha hai
    insertAtHead(head, 20);     // insertAtHead call ho raha hai. 20 ek new node hai jo head pr A jae ga
    insertAtHead(head, 21);     // insertAtHead call ho raha hai. 20 ek new node hai jo head pr
    print(head);
    print(head);                // print function call ho raha hai
    insertAtTail(tail, 30);     // tail par node insert krne liye hai
    print(tail);
    insertAtTail(tail, 50);     // tail par node insert krne liye hai
    print(tail);
    insertAtnth(nth, 1, 40);    // intertAtnth call ho raha hai   // nth -> head hai, 2 -> Position hai, 50 value hai
    // insertAtnth(tial, nth, 3, 40);     //  <-->  // end par nth node insert karne k liye
    print(nth);                 // print function call ho raha hai
    // print(tail);             // intertAtnth call ho raha hai

    deltetionOfNode(3, head);   // delete at any position
    print(head);


    return 0;
}

// eletionLinkedList.cpp -o DeletionLinkedList } ; if ($?) { .\DeletionLinkedList }
// 10
// Insert at head: Insert at head: 21 20 10
// 21 20 10
// Insert at tail: 10 30
// Insert at tail: 10 50
// Insert at head: 40 10 50
// 21 20 10 50
// PS C:\Users\Arslan\Desktop\linked List>