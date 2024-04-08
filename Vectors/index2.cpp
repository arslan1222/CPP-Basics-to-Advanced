#include<iostream>
using namespace std;

int main(){

    int arr1[] = {1,6,7,10};
    int arr2[] = {2,4,5,12,4,13,15,16};
    int m = 4;
    int n = 9;

    // Code to merge the sorted arrays.

    int result[m+n];
    int i=0;    // will help us to iterate on arr1
    int j=0;    // will help us to iterate on arr2
    int k =0;   // will help us to iterate on result

    while(i < m and j < n){
            if(arr1[i] < arr2[j]){
            result[k++] = arr1[i++];
          
        } else {
            result[k++] = arr2[j++];
           
        }
    }

    while(i < m){
        result [k++] = arr1[i++];
    
    }
    while(i < m){
        result[k++] = arr2[j++];
    
    }
    
    for(int i=0; i <(m+n); i++){
        cout<<result[i]<<" ";
    }



    return 0;
}