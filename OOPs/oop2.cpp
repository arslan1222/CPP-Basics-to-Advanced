#include<iostream>              // Static and Dynamic Allocatiom 
using namespace std;

class Hero {

    private:
    int health = 10;            // <-- yaha par bhi value initialize kar sakte hain
    public:
    char level = ('a');         // <-- yaha par bhi value initialize kar sakte hain

    int getHealth(){
        return health;          // <-- yaha par bhi value initialize kar sakte hain
    }

    char getLevel(){
        return level;           // <-- yaha par bhi value initialize kar sakte hain
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }
};

int main(){

    //Static Allocation
    Hero a;
    a.setHealth(100);                              // <-- yaha par bhi value initialize kar sakte hain
    cout<<"level is  "<<a.getLevel()<<endl;
    cout<<"health is  "<<a.getHealth()<<endl;
 
    // Dynamical Allocation

    Hero *b = new Hero;
    // b->setHealth(90);                           // <-- yaha par bhi value initialize kar sakte hain               
    cout<<"level is  "<<b->getLevel()<<endl;
    cout<<"health is  "<<(*b).getHealth()<<endl;

    

    return 0;
}