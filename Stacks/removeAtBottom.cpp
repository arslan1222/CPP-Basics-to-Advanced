#include<iostream>     // Inser at bottom
#include<stack>
using namespace std;

void removeAtBottom(stack<int> &st){        // T.C = O(N) , S.C = O(N)
    stack<int> temp;
    while(st.size() != 1){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.pop();
    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
        // cout<<curr<<endl;
    }
}

// Recursively
void f(stack<int> &st){
    if(st.size() == 1){
        st.pop();
        return;
    }
    int curr = st.top();
    st.pop();
    f(st);
    st.push(curr);
    
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // removeAtBottom(st);
    f(st);
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}