#include<iostream>
#include "oop2.cpp"
using namespace std;

// We can use another file by its name in the first class like -> "oop2.cpp"

class One{
    private:
    int level;

    //function randomly
    void fun(){
        cout<<level<<endl; 
    }
};

int main(){
    Hero a;
    // cout<<sizeof(a)<<endl;  // if we did't initialize any data member in the class and try to cout its size then defoult size will be 1
    // a.f();
    // cout<<a.level<<endl;



    return 0;
}