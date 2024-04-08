#include<iostream>
using namespace std;

class Animal {

    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};

class Dog{
    public:
    void speak(){
        cout<<"Barking "<<endl;
    }
};

class Lion: public Animal, public Dog{
    public:
    void speak(){
        cout<<"Roar "<<endl;
    }
};

int main(){

    Lion obj;
    obj.Animal::speak();



    return 0;
}