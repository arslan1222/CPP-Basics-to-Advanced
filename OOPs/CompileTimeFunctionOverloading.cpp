#include<iostream>                   // Compile time polymorphism / Function Overloading
using namespace std;

class A{
    public:
    void add(){
        cout<<"Hello Arslan Haider"<<endl;
    }
    int add(int num1){
        return num1;
    }
    int add(char num1){
        return num1;
    }

    int add(int num1,int num2){
        return num1 + num2;
    }

    int add(int num1, int num2, int num3){
        return num1 + num2 + num3;
    }
    
};

int main(){

    A obj;
    obj.add();
    cout<<"Num1 = "<<obj.add(10)<<endl;
    cout<<"num1 + num2 = "<<obj.add(10, 20)<<endl;
    cout<<"num1 + num2 + Num3 = "<<obj.add(10, 20, 30)<<endl;



    return 0;
}