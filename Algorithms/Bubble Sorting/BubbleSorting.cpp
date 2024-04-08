#include<iostream>
#include<vector>
using namespace std;

    // Bubble Sort Algorithm 
    // Definition
// "Repeatedly Swap two adjacent elements if in wrong order"

    // Using Arrays
// int main(){

//     int n = 5;
//     int arr[5] = {20,50,40,10,30};

//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }

//    for(int i=0; i<n; i++){
//     cout<<arr[i]<<ends;
//    }

//     return 0;
// }

    // Using vectors
// void bubbleSort(vector<int> &v){
//     int n=v.size();
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(v[j] > v[j+1]){
//                 swap(v[j], v[j+1]);
//             }
//         }
//     }

    // return;
// }

// int main(){


    // int n;
    // cin>>n;

    // vector<int> v(n);

    // for(int i=0; i<n; i++){
    //     cin>>v[i];
    // }

    // bubbleSort(v);

    // for(int i=0; i<n; i++){
    //     cout<<v[i]<<ends;
    // }

    // return 0;
// }

    // Use of boolian operator
    int main(){

    int n = 5;
    int arr[5] = {10,30,20,40,50};
    bool flag = false;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                flag = true;
                swap(arr[j], arr[j+1]);
            }
        }
        if(!flag) break;
    }

   for(int i=0; i<n; i++){
    cout<<arr[i]<<ends;
   }

    return 0;
}