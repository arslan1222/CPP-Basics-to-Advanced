#include<iostream>
using namespace std;

int fibo(int n){
    if(n == 0 or n == 1) return n;
    return fibo(n-1) + fibo(n-2);
}
int main(){

    int result = fibo(7);
    cout<<result<<endl;
    return 0;
}