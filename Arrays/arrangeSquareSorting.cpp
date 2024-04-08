#include <iostream>
using namespace std;

int main(){
    int arr[] = {-4,-3,-1,0,2,10};
    int size = 6;
    // code for arrange array

    int result[size];
    int i = 0;
    int j = size-1;
    int k = size-1;

    while(i <= j && k >= 0){
        if(abs(arr[i]) > abs(arr[j])){
            result[k] = arr[i]*arr[i];
            i++;
            k--;
        }else {
            result[k] = arr[j]*arr[j];
            j--;
            k--;
        }
    }

    for(int i=0; i<size; i++){
        cout<<result[i]<<endl;
    }
    return 0;
}