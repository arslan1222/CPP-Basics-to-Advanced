#include<iostream>     // Inser at any index
#include<stack>
using namespace std;

void insertAtAnyIdx(stack<int> &st, int x, int idx){        // T.C = O(N) , S.C = O(N)
    stack<int> temp;
    int count = 0;
    int n = st.size();
    while(count < n-idx){
        count++;
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
    insertAtAnyIdx(st, 10, 2);
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}