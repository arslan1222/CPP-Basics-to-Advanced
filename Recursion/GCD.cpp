#include<iostream>      // Greater Common Divisor
using namespace std;

int gcd(int a, int b){
    // if(b>a) return gcd(b, a);
    if(b == 0) return a;            //Base Case
    return gcd(b, a%b);

}

int main(){

    int x= gcd(72, 54);
    cout<<x<<endl;


    return 0;
}