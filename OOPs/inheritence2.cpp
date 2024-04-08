#include <iostream>         // Inheritence // use of protected access specifier
using namespace std;

class Human {

    protected:
    string name;
    int weight;
    int height = 6;
    int age=20;
    public:
    // int getAge(){
    //     return this->age;
    // }
    int setWeight(int w){
        this->weight= w;
    }
};

class Male: public Human {
    public:
    string color = {'A'};

    void sleep(){
        cout<<"Hello World"<<endl;;
    }

    int getAge(){
        return this->age =10;
    }

};

int main(){

    Male object1;
    cout<<object1.getAge()<<endl;


    return 0;
}