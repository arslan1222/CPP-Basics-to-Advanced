#include<iostream>          // Scope Resulation Operator... inheritence
using namespace std;


class A{

    public:
    void fun(){
        cout<<"I am functiona A"<<endl;
    }
};

class B{

        public:
        void fun(){
            cout<<"I am function B"<<endl;
        }
};

class C: public A, public B{


};

 
int main(){

   C object;
   object.B::fun();
   object.A::fun();

    return 0;
}