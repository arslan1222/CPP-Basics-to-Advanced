#include<iostream>
using namespace std;

class Node{
    public:
    int val;   
    Node* next;

    Node(int data){
        this->val = data;     // We can declare without this pointer
        this->next = NULL;
    }
};


int main(){

    Node* node1 = new Node(10);
    cout<<node1->val<<" "<<node1->next<<endl;

    return 0;
}