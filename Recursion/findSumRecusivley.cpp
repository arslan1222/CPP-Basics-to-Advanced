#include<iostream>
using namespace std;


// recursivle solution

/* int main(){
int arr[] = {4,6,7};
int ans = 0;
for(int i=0; i<3; i++){
    ans = ans+arr[i];
}
cout<<ans<<endl;
    return 0;
}  */

int f(int *arr, int idx, int n){
    //Base Case
    if(idx == n-1) return arr[idx];
    
    return arr[idx] + f(arr, idx+1, n);
}


int main(){

    int arr[] = {2,3,5,6,8};
    int n = 5;
    cout<<f(arr, 0, n)<<endl;
    return 0;
}
    
