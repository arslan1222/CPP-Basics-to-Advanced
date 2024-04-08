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

    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }

};


int main(){

    // Static
    Hero Arslan;  // Destructor Automatically called

    // Dynamic
    Hero *Haider = new Hero(); // Destructor manually called
    delete Haider;

    
    return 0;
}