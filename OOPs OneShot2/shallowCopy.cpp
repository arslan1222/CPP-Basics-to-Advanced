#include<iostream>
using namespace std;

class Hero{
    public:
    char *name;
    int health = 70;
    char level = 'A';

    Hero(){
        cout<<"Constructor is called"<<endl;
        name = new char[50];                // dynamically array is allocated
    }

    // Hero(Hero &temp){  //Most important lines
    //     cout<<" Copy Constructor is called"<<endl;
    //     this->health = temp.health;
    //     cout<<health<<endl;
    // }
    void print(){
        cout<<"Name is: "<<name<<endl;
        cout<<"Health is: "<<health<<endl;
        cout<<"Level is: "<<level<<endl;
    }

    setName(char name[]){
        this->name = name;
    }

};

int main(){

    Hero Arslan;
    char name[7] = "Arslan";
    Arslan.setName(name);           // name set kr diya
    Arslan.print();

    Hero Haider(Arslan);            // Copy Constructor
    // Hero Haider = Arslan;
    Haider.print();

    Arslan.name[0] = 'B';
    Arslan.print();

    Haider.print();

    return 0;
}