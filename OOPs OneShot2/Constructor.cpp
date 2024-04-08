#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;

    Hero(){
        cout<<"Constructor is called: "<<endl;
    }
    Hero(int health){
        cout<<"Adress of this-> "<<this<<endl;
        health = health;
    }
    Hero(int health, char level){
        this->level = level;
        this->health = health;
    }
    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }

};


int main(){

    // Hero ramesh;
    // Hero ramesh(10);
    // cout<<"adress of ramesh: "<<&ramesh<<endl;
    Hero ramesh(10, 'A');
    ramesh.print();
    return 0;
}