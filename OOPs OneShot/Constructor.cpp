#include<iostream>
using namespace std;

class Rectangle{
    public:
    int m;
    int n;
    Rectangle(){       // Defualt Constructor - no arguments pass
        m = 0;
        n = 0;
    }
    Rectangle(int a, int b){  // Parameterized Constructor - arguments pass
        m = a;
        n = b;
    }
    Rectangle(Rectangle &r){  // Copy Constructors - initialize an object
        m = r.m;
        n = r.n;
    }

    ~Rectangle(){  // Destructor
        cout<<"Destructor is called"; 
    }
};

int main(){
    Rectangle* r1 = new Rectangle();
    cout<<r1->m<<" "<<r1->n<<endl;
    delete r1; // delete only used for Pointers

    // Rectangle r1;
    // cout<<r1.m<<" "<<r1.n<<endl;
    Rectangle r2(3, 4);
    cout<<r2.m<<" "<<r2.n<<endl;

    Rectangle r3= r2;
    cout<<r3.m<<" "<<r3.n<<endl;

    return 0;
}