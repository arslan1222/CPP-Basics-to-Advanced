#include<iostream>
#include<vector>
using namespace std;                        //Given an integer array 'a' sirted in non-decreasing order, return an array of the squares of each nu
                                            // number sored in non-decreasing order.
    void sort(vector<int>&v){

    vector<int>ans;

    int left_ptr =0;
    int right_ptr = v.size()-1;

    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
    }else{
        ans.push_back(v[left_ptr]*v[left_ptr]);
        left_ptr++;
    }
    }

    // reverse(ans.begin(), ans.end());

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
    
}    

   

int main(){
    vector<int>v;

    int n; cin>>n;

    for(int i=0; i<n; i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }

    sort(v);

     

    
}