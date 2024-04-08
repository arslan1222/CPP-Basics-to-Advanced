#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int no_of_digits = 0;
    int temp = n;
    while(temp>0){
        temp = temp /10;
        cout<<temp<<endl;
        no_of_digits++;
    }

    cout<<no_of_digits<<endl;
    return 0;
}