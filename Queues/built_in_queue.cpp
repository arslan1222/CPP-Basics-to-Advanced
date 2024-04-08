#include<iostream>
#include<stack>
#include<queue>
using namespace std;


int main(){

    queue<int> input;
    input.push(10);
    input.push(20);
    input.push(30);
    input.push(40);
    input.push(50);
    input.pop();

    while(not input.empty()){
        cout<<input.front()<<ends;
        input.pop();
    }
    return 0;
}