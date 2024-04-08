#include<iostream>    // Check wheater a given bracket sequence is balanced or not  // Full easy program
#include<stack>
using namespace std;              // T.C -> O(N)   &   S.C -> O(N)

bool isValid(string &str){
    stack<char> st;
    for(int i=0; i<str.size(); i++){
        char ch = str[i];  // current char
        if(ch == '(' or ch == '[' or ch == '{'){
            st.push(ch);
        }else{
            // closing brackets
            if(ch == ')' and !st.empty() and st.top() == '('){
                st.pop();
            }else if(ch == ']' and !st.empty() and st.top() == '['){
                st.pop();
            }else if(ch == '}' and !st.empty() and st.top() == '{'){
                st.pop();
            }else{
                return false;
            }
        }
    }
    return st.empty();
}
int main(){
    string str = "((())){}";
    cout<<isValid(str)<<endl;

    return 0;
}