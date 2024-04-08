#include<iostream>
using namespace std;

/*
void f(int num, int k){
    //base case
    if(k == 0) return;

    f(num, k-1);
    cout<<(num * k)<<" ";
}

int main(){

    f(3, 5);
    return 0;
}  */
/*
int f(int n){

    //base case
    if(n == 0) return 0;

    //assumption
    return f(n-1) + ((n % 2 == 0)?(-n) : n);

}
int main(){
    cout<<f(3)<<endl;
    return 0;
}  */


void f(int n){
    //base case 
    if(n < 1) return;
    //go and print first n-1 natural nubers

    f(n-1);
    cout<<n<<" ";

}

int main(){

    f(20);
    return 0;
}
