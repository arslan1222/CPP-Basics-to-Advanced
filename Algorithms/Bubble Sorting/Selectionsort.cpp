#include<iostream>
#include<vector>
using namespace std;

// int selectionSort(int arr[], int &size){   // 5,8,7,4,2

//     int n = size;
//     for(int i=0; i<n-1; i++){
//         int min_idx = i;
//         for(int j=i+1; j<n; j++){
//             if(arr[j] < arr[min_idx]){
//                 min_idx = j;
//             }
//         }
//         if(min_idx!= i){
//             swap(arr[i], arr[min_idx]);
//             if(arr[i]<arr[min_idx]){
//                 cout<<arr[i]<<ends;
//             }else{
//                 cout<<arr[min_idx]<<ends;
//             }
//         }
//     }
    
// }

// int main(){


//     int arr[5] = {5,8,4,9,2};
//     int size = 5;
//     int result = selectionSort(arr, size);
//     // cout<<result<<endl;
//     return 0;
// }

// void selectionSort(vector <int> &v){

//     int n= v.size();
//     for(int i=0; i<n; i++){

//         //finding min element in unsorted array
//         int min_idx = i;
//         for(int j=i+1; j<n; j++){
//             if(v[j] < v[min_idx]){
//                 min_idx = j;
//             }
//         }

//         // Placing min element at beginning
//         if(min_idx!= i){
//             swap(v[i], v[min_idx]);
//         }
//     }
//     return;
// }

// int main(){

//     int n; cin>>n;
//     vector<int> v(n);
//     for(int i=0; i<n; i++){
//         cin>>v[i];
//     }

//     selectionSort(v);

//     for(int i=0; i<n; i++){
//         cout<<v[i]<<ends;
//     }

//     return 0;
// }


void selectionSort(vector <int> &v){

    int n= v.size();
    for(int i=n; i>=1; i--){

        //finding max element in unsorted array
        int max_idx = i;
        for(int j=i-1; j>=0; j--){
            if(v[j] > v[max_idx]){
                max_idx = j;
            }
        }

        // Placing min element at beginning
        if(max_idx!= n){
            swap(v[i], v[max_idx]);
        }
    }
    return;
}

int main(){

    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    selectionSort(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<ends;
    }

    return 0;
}