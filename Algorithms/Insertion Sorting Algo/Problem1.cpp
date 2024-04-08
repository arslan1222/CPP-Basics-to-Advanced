#include<iostream>
#include<vector>
using namespace std;


void insertionSort(vector<int> &v){
    int n = v.size();
    for(int i=n-1; i>0; i--){
        for(int j=i+1; j<n; j++){
          if(v[j]==0){
            swap(v[j], v[i]);
          }
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