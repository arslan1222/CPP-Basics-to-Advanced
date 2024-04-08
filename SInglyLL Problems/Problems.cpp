// Pattern:  2 Pointers
// Given 2 linked lists, Tells if they are equal or not. Two linked list are equal if they have the same data and the arragemment of data is also the
#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class  LinkedList{
    public:
    Node* head;

    LinkedList(){
        head = NULL;
    }
void insertAtTail(int value){             
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
    
    void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<ends;
            temp = temp->next;
        }cout<<endl;
    }
};

bool checkLinkedListd(Node* head1, Node* head2){
    Node* ptr1 = head1;
    Node* ptr2 = head2;

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->val!=ptr2->val){
            return false;
        }

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return (ptr1==NULL && ptr2==NULL);
}

int main(){

    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.print();

    
    LinkedList ll2;
    ll2.insertAtTail(1);
    ll2.insertAtTail(2);
    ll2.insertAtTail(3);
    ll2.print();
    cout<<checkLinkedListd(ll1.head, ll2.head)<<endl;

    return 0;
}