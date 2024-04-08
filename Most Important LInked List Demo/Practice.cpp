// Given the head of a linked list, delete every alternate element from the list staring from the second delment.
// 1st way
#include<iostream>          
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

// this function is for insertion of nodes
    void insertAtTail(Node* &head, int value){  

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
void deleteAlternateNode(Node* &head){
    Node* curr_node = head;
    while(curr_node!=NULL && curr_node->next!=NULL){
        Node* temp = curr_node->next;
        curr_node->next = curr_node->next->next;
        free(temp);
        curr_node = curr_node->next;
    }
}



// this function is displaying for nodes
    void print(Node* &head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<ends;
            temp = temp->next;
        }cout<<endl;
    }


int main(){

    Node* node1 = new Node(1);
    Node* head(node1);
    int n = 5;
    for(int i=2; i<=n; i++){       // here we use loop to print linked list nodes
        insertAtTail(head, i);
    }
    
    print(head);
    deleteAlternateNode(head);
    print(head);


    return 0;
}

/*
// 2nd way
#include<iostream>
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

    if(head==NULL){
        head = new_node;
        return;
    }
    Node* temp;
    temp = head;
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
// Fun for alternate positions
void deleteAlternateNode(Node* &head){
    Node* curr_node = head;
    while(curr_node!=NULL && curr_node->next!=NULL){
        Node* temp = curr_node->next;   // This node will be deleted
        curr_node->next = curr_node->next->next;
        free(temp);
        curr_node = curr_node->next;
    }
}
int main(){

    LinkedList ll;

    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.print();
    deleteAlternateNode(ll.head);
    ll.print();
    return 0;
}*/