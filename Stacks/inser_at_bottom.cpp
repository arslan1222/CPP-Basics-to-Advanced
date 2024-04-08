#include<iostream>     // Inser at bottom
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int x){        // T.C = O(N) , S.C = O(N)
    stack<int> temp;
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

// Recursively
void f(stack<int> &st, int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int curr = st.top();
    st.pop();
    f(st, x);
    st.push(curr);
    
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insertAtBottom(st, 10);
    // f(st, 10);          Recursion's function
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}