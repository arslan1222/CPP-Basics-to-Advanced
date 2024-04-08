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

class Animal{

        public:
        int lion;
        int tiger;

        public:
        void eat(){
            cout<<"Lions and Tiger can eat: "<<endl;
        }
};

class Birds: public Human, public Animal{


};

 
int main(){

    Birds sparrow;
    sparrow.age = 20;
    cout<<sparrow.age<<endl;
    sparrow.lion = 15;
    cout<<sparrow.lion<<endl;

    sparrow.talk();
    sparrow.eat();


    return 0;
}