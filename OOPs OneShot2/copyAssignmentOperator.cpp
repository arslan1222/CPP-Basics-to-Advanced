#include<iostream>  
using namespace std;

class Hero{
    public:
    int health = 70;
    char level = 'A';

    Hero(){
        cout<<"Constructor is called: "<<endl;
    }
    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }

};


int main(){

    Hero Arslan;
    Arslan.print();
    Hero Haider;
    Haider = Arslan;    // Copy Assignment Operator
    Haider.print();
}