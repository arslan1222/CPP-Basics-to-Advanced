#include<iostream>
using namespace std;

int main(){

    // int n= 20;
    // int val = 0;
    // for(int i=1; i<=n; i*=2){
    //     for(int j=n; j>i; j--){
    //         val++;
    //         cout<<val<<endl;
    //     }
    // }

    int n = 20;
    int val = 0;
    for(int i=n; i>0; i/=2){
        for(int j=0; j<i; j++){
            val++;
            cout<<val<<endl;
        }
    }

    return 0;
}