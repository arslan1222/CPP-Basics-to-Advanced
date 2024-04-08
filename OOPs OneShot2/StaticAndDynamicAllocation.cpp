#include<iostream>
using namespace std;
class Hero{
    public:
    int health = 70;
    char level = 'a';
};

int main(){

    Hero a;
    // Static Allocation
    cout<<a.health<<endl;
    cout<<a.level<<endl;

    // Dynamic Allocation
    Hero *b = new Hero;
    cout<<(*b).health<<endl;
    cout<<(*b).level<<endl;
    // & also
    cout<<b->health<<endl;mnk
    cout<<b->level<<endl;

    return 0;
}