#include<iostream> // Revision class  // Print Alternate element of LinkedList
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
        if(head == NULL){
            head = new_node;
            return;
        }
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
      // Yaha pr hum print fun k Andar (Node* &head) iss liye nhi de rahay bcz ye hamari linkedlist class k ander hai agar ye class k Bahir hota tu hum ne head as a parameter dena tha jis tra pichle lectures mein krte Ay hain
        void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }cout<<endl;
    }
};
void deleteDuplicateNode(Node* &head){
    Node* curr_node = head;
    while(curr_node!=NULL){
        while(curr_node->next!=NULL && curr_node->data==curr_node->next->data){
            // delete current node
            Node* temp = curr_node->next;   // Node to be deleted
            curr_node->next = curr_node->next->next;
            free(temp);
        }
        curr_node = curr_node->next;
    }
}

int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.print();
    deleteDuplicateNode(ll.head);
    ll.print();
}

