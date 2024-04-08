#include<iostream>
using namespace std;

int factorial(int n){

    //Base Case
    if(n == 0) return 1;
    // int smallproblem = factorial(n-1);
    // int biggerproblem = n * smallproblem;
    // return biggerproblem;
    return n * factorial(n - 1);
}

int main(){

    int n;
    cin>>n;
    int result = factorial(n);
    cout<<result<<endl;

    return 0;
}