#include<iostream>
using namespace std;                            // Use of getter and setter

class Hero {
    //properties
    
    private:
    int health =10;
    public:
    char level;

    

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level = 'a';
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }


    
};   

int main(){

    Hero a;
    a.setHealth(20);
    cout<<a.getHealth()<<endl;
    a.setHealth(90);
    cout<<a.getHealth()<<endl;
    cout<<a.getLevel()<<endl;
    // a.level = 'b';
    // a.health =10;
    // cout<<a.health<<endl;
    // cout<<a.level<<endl;
    





    // Hero a;
    // Hero *h = new Hero;
    // cout<<(*h).getHealth()<<endl;


    // Hero Himesh;
    // cout<<Amir.getHealth()<<endl;
    // Amir.health;
    // cout<<Amir.health<<endl;

    // Static Allocation
    /* Hero a;
    a.setHealth(70);
    a.setLevel('A');
    cout<<a.getLevel()<<endl;
    cout<<a.getHealth()<<endl; */

    // Dynamic Allocation
    /* Hero *b = new Hero;
    b->setHealth(80);
    cout<<(*b).level<<endl;
    cout<<(*b).getHealth()<<endl;
    cout<<b->level<<endl; */




    return 0;
}