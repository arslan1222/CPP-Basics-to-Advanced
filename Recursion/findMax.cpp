// Print the max value of the array [ 5,4,6 ,7,45,];
// iterative solution

#include<iostream>
using namespace std;
/* int main(){

    int arr[5] = {50,5,7,6,8};
    int ans = -1;

    for(int i=0; i<5; i++){

        if(arr[i] > ans){
            ans = arr[i];
        }
    }
    cout<<ans<<endl;

    return 0;
} */


/*  int f(int *arr, int idx, int n){
    //base Case
    if(idx == n-1) return arr[idx];
    // self work
    return max(arr[idx],f(arr, idx+1, n));
}

int main(){

    int arr[] = {3,6,70,600,400,9};
    int n = 6;
    cout<<f(arr, 0, n)<<endl;
    return 0;
}  */