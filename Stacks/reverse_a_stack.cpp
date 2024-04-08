#include<iostream>     // Q.Copy Stack? Copy contents of one stack to another in same order
#include<stack>
using namespace std;

stack<int> reverseAStack(stack<int> &st){
    stack<int> t1, t2;
    while(not st.empty()){
        // do the process till the time input stack does not become empty
        int curr = st.top();
        st.pop();
        t1.push(curr);
    }
    while(not t1.empty()){
        int curr = t1.top();
        t1.pop();
        t2.push(curr);
    }
    while(not t2.empty()){
        int curr = t2.top();
        t2.pop();
        st.push(curr);
    }
    return st;
}
        // Recursively


int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> res;
    reverseAStack(st);
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}