#include<iostream>
using namespace std;

int sum(int n){
    // Base case
    if( n>=0 & n<=9) return n;
    // assumption
    return sum( n/10 ) + ( n%10 );
}

int main(){

    cout<<sum(12345)<<endl;
    return 0;
}