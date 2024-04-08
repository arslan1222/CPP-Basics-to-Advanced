#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);     // in this phase we add elements from rear of the queue
    dq.push_back(2);     
    dq.push_back(3);
    dq.push_front(0);    // in this phase we can add elements from front of the queue
    dq.push_front(5);

    while(not dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    return 0;
}