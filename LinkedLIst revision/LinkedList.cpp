#include<iostream> // Revision class
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

int main(){

    Node* node1 = new Node(10);
    cout<<node1->data<<endl;

    return 0;
}