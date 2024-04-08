#include<iostream>          // Constructor, Parameterized Constructor & use of (this) keyword
using namespace std;
class Hero {
    //properties
    
    private:
    int health = 10;
    public:
    char level = 'A';

    //default constructor
    Hero(){
        cout<<"Constructor called"<<endl;
    }

    //Parameterized Constructor
    Hero (int health){
        this -> health = health;
    }

    Hero(int health, char level){
        this -> level = level;
        this -> health = health;
    }

    void print(){
        cout<< level <<endl;
        cout<< health <<endl;
    }


    // int getHealth(){
        
    //     return health;
    // }

    // char getLevel(){
    //     return level;
    // }

    // void setHealth(int h){
    //     health = h;
    // }

    // void setLevel(char ch){
    //     level = ch;
    // }
 

    
};   

int main(){

    Hero a(40);
    // cout<<  &a <<endl;
    a.print();

    Hero *b = new Hero(11);
    Hero temp(12, 'b');
    b->print();
    temp.print();

    return 0;
}