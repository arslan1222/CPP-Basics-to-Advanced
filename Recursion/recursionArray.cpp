#include<iostream>
using namespace std;

void f(int *arr, int idx, int n){
    //Base casa
    if(idx == n) return;
    //self work
    cout<<arr[idx]<<endl;
    f(arr, idx+1, n); //assume it works correctly

}

int main(){
    int n = 5;
    int arr[] = {6,1,9,3,4};
    f(arr, 0, n);
    
    return 0;
}