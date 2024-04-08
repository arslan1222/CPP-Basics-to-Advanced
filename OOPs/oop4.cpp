#include<iostream>          // Use of Copy  Constructor
using namespace std;
class Hero {
    //properties
    
    private:
    int health;
    public:
    char *name;
    char level;

    Hero(){
        cout<<"Constructor called"<<endl;
        // name = new char[100];
    }

    Hero(int health){
        this -> health = health;
    }

    // Parameterized constructors
    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    Hero(Hero &temp){                          // <-- Pass by reference
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<"Name is : "<<this->name<<endl;
        cout<<"Health is : "<< this->health << endl;
        cout<<"Level is : "<< this->level << endl;
    }


    int getHealth(){
        
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        this->name = name;
    }


    
};   

int main(){


    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('A');
    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();

    Hero her2(hero1);
    her2.print();

    hero1.name[0] = 'G';
    hero1.print();













    // Hero b(70, 'A');
    // b.print();

    // //Copy Constructor
    // Hero c(b);
    // c.print();

    










    return 0;
}