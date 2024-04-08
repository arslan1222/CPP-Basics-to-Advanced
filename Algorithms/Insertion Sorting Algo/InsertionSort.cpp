#include<iostream>
#include<vector>
using namespace std;

/*
        Time & Space Complexity
    1 + 2 + 3 + .... N-1
    N(N-1)/2 = N^2
    Time Comlexity = O(N^2);
    Space Complexity = O(1)   Constant time

*/

void insertionSort(vector <int> &v){

    int n = v.size();
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++){
            if(v[i] > v[j]){
                swap(v[i], v[j]);            
                }
        }
    }


int main(){

    int n; cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    insertionSort(v);
    
    for(int i=0; i<n; i++){
        cout<<v[i]<<ends;
    }

    return 0;
}

// void insertionSort(vector<int> &v){
//     int n = v.size();
//     for(int i=1; i<n; i++){
//     int current_ele = v[i];
//     // Find correct position for current element 
//     int j = i-1;

//     while(j>=0 && v[j] > current_ele){
//         v[j+1] = v[j];
//         j--;
        
//     }
//     // insert current element
//     v[j+1] = current_ele;
// }
// }



// int main(){

//     int n; cin>>n;
//     vector<int> v(n);

//     for(int i=0; i<n; i++){
//         cin>>v[i];
//     }

//     insertionSort(v);
    
//     for(int i=0; i<n; i++){
//         cout<<v[i]<<ends;
//     }

//     return 0;
// }