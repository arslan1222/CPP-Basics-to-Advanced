#include <iostream>
using namespace std;

class Human {

    public:
    string name;
    int weight;
    int height = 6;
    int age=20;
    public:
    int getAge(){
        return this->age;
    }
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
};

int main(){

    Human obj;
    cout<<obj.age<<endl;
    Male object1;
    cout<<object1.getAge()<<endl;
    cout<<object1.color<<endl;
    object1.setWeight(70);
    cout<<object1.weight<<endl;;
    object1.sleep();


    return 0;
}