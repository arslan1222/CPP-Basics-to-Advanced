#include <iostream>
#include <vector>
using namespace std;


int main(){

    // int n; cin>>n;
    vector <int> v;

    for(int i=0; i<3; i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }

    // for(int element: v){
    //     cout<<v[element]<<ends;
    // }

    for(int i=0; i<3; i++){
        cout<<v[i]<<ends;
    }


    return 0;
}