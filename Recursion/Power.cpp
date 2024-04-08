#include<iostream>
using namespace std;

int pow_recursiv(int p, int q){
    //Base Case 
    if(q == 0) return 1;
    if(q%2 == 0){
    int result = pow_recursiv(p, q/2);
    return result * result;
    }else{
        // if q is odd
        int result = pow_recursiv(p, (q-1) / 2);
        result p * result * result;
    }
    
}

int main|(){

    cout<<pow_recursiv(2, 3)<<endl;
    
    return 0;
}