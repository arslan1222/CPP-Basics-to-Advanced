#include<iostream>
using namespace std;

class Hero{
    public:
    static int health;  // Staic data member

    static int fun(){

        return health;
    }


};

int Hero::health = 70;

int main(){

    cout<<Hero::fun()<<endl;

    return 0;
}