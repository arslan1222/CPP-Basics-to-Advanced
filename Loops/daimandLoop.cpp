#include<iostream>
using namespace std;

int main(){

    int n = 5;
    //Loop to print upper triangle
    for(int line = 1; line<=n; line++){

        int no_of_space = (n-line);

        // this loop will print spaces
        for(int i=0; i<no_of_space; i++){
        cout<<" ";
    }

    int no_of_chars = 2* line - 1;                              // 2*1-1 = 1

    //loop to print no of characters
    for(int j=0; j< no_of_chars; j++){
        char ch = (char)('A'+j);
        cout<<ch;
    }cout<<endl;

    }

    for(int line=n+1; line<=2*n-1; line++){
        int no_of_spaces = (line - n);

        // loop for print spaces
        for(int k=0; k < no_of_spaces; k++){
            cout<<" ";
        }
        int no_of_char = 2*(2*n-line)-1;
        // loop for print characters

        for(int j=0; j<no_of_char; j++){
            cout<<(char)('A'+j);
        }cout<<endl;
    }
    return 0;
}