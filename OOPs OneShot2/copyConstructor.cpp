#include<iostream>
using namespace std;

class Hero{
    public:
    int health = 70;
    char level = 'A';

    Hero(){
        cout<<"Constructor is called"<<endl;
    }

    Hero(Hero &temp){  //Most important lines
        cout<<" Copy Constructor is called"<<endl;
        this->health = temp.health;
        cout<<health<<endl;
    }
    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }

};

int main(){

    Hero Arslan;
    Arslan.print();
    Hero Haider(Arslan); // Copy Constructor
    Haider.print();

    return 0;
}