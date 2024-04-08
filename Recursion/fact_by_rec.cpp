#include<iostream>
using namespace std;

int fact(int num){

    //base case
    if(num == 1) return 1;
    // assumption
    return num * fact(num - 1);
}


int main(){
    cout<<fact(5)<<endl;
    return 0;
}