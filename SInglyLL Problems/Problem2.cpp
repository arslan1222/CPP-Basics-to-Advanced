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
        Node* new_node = new Node(value);
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
// get length
int getlength(Node* head){
        Node* temp = head;
        int length = 0;
        while(temp!=NULL){
            length++;
            temp = temp->next;
        }
        return length;
    }
Node* moveHeadByK(Node* head, int k){
    Node* ptr = head;
    while(k--){
        ptr = ptr->next;
    }
    return ptr;
}

Node* getIntersection(Node* head1, Node* head2){
    // step1: calculate lenghts of both linked lists
    int l1 = getlength(head1);
    int l2 = getlength(head2);

    // Step2: find difference k between linked list and move longer linked list ptr by k step
    Node* ptr1, ptr2;
    if(l1>l2){   // ll1 is longer
        int k = l1-l2;
        ptr1 = moveHeadByK(head1, k);
        ptr2 = head2;
    }
    else{  // ll2 is longer
        int k = l2-l1;
        ptr1 = head1;
        ptr2 = moveHeadByK(head2, k);
    }
    // Step3: compare ptr1 and ptr2 nodes
    while(ptr1){
        if(ptr1==ptr2){
            // return ptr2;
            return ptr1; 
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;
}

int main(){

    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.print();
    LinkedList ll2;
    ll2.insertAtTail(6);
    ll2.insertAtTail(7);
    ll2.print();
    ll2.head->next->next = ll1.head->next->next->next;

    Node* intersection = getIntersection(ll1.head, ll2.head);
    if(intersection){
        cout<<intersection->val<<endl;
    }else{
        cout<<"-1"<<endl;
    }

    return 0;
}