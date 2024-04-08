#include<iostream>
#include<vector>
using namespace std;

void SortingofTwoArrays(vector<int>&v, vector<int>&u){


    // v[i] = 1 3 5   1
    // u[i] = 2 4 6   4

    int fArray;
    int sArray;

    int max =0;

    vector<int>ans;

    for(int i=0; i<6; i++){
        if(v[i]<u[i]){
            ans.push_back(i);
        }
        if(v[i]>u[i]){
            ans.push_back(i);
        }
    }
    for(int i=1; i<7; i++){
        cout<<ans[i]<<" ";
    }cout<<endl;

    
}

int main(){

    vector<int>v;
    vector<int>u;

    int n; cin>>n;

    for(int i=0; i<n; i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }

    cout<<" input second Array: "<<endl;
    int m; cin>>m;

    for(int i=0; i<m; i++){
        int ele; cin>>ele;
        u.push_back(ele);
    }

    

    SortingofTwoArrays(v, u);

    
    return 0;
}
