#include<iostream>
using namespace std;
class Hero{
    private:

    int health;
    public:
    char level = 'a';

    int getHealth(){
        return health;
    }
    char getLevel(){  // by using get we can access private data members another class like main().
        return level;
    }
    // void setHealth(int h){
    //     health = h;
    // }
    // void setLevel(char ch){  // Setter is like a function were we pass values and call from main() function.
    //     level = ch;
    // }


};


int main(){

    Hero a;
    cout<<a.getHealth()<<endl;
    cout<<a.getLevel()<<endl;
    // a.setHealth(70);
    // cout<<a.getHealth()<<endl;

    return 0;
}