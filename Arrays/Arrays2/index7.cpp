#include<iostream>
using namespace std;

int main(){
    int arr1[3];
    int arr2[3];

    for(int i=0; i<3; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<3; i++){
        cin>>arr2[i];
    }

    int arr3[6];

    for(int i=0; i<6; i++){
        if(arr1[i]<arr2[i]){
            arr3[i] = arr3[i] + arr1[i]; 
        }
        if(arr1[i]>arr2[i]){
            arr3[i] = arr3[i] + arr2[i];
        }
    }
    for(int i=0; i<6; i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    return 0;
}