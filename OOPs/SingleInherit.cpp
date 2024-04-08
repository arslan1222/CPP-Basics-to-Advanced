#include<iostream>          // Single inheritence
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
 
int main(){

    Male obj;
    obj.age = 20;
    cout<<obj.age<<endl;
    obj.talk();

    return 0;
}