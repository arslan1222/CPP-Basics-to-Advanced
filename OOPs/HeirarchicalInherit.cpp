#include<iostream>          // Heirarchical inheritence
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

class Animal: public Human{

        public:
        int lion;
        int tiger;

        public:
        void eat(){
            cout<<"Lions and Tiger can eat: "<<endl;
        }
};

class C: public Animal{

};

 
int main(){

    C obj;
    obj.age = 20;
    cout<<obj.age<<endl;

    return 0;
}