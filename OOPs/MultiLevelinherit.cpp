#include<iostream>          // MultiLevel inheritence
using namespace std;


class Human{

    public:
    int age;
    int height;


    public:
    void talk(){
        cout<<"Human can talk "<<endl;
    }   
};

class Male: public Human{

};

class Female: public Human{

};
 
int main(){

    Male obj;
    obj.age = 20;
    cout<<obj.age<<endl;
    obj.talk();
    Female obj1;
    obj1.age= 19;
    cout<<obj1.age<<endl;


    return 0;
}