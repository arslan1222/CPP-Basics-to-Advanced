#include<iostream>
#include<vector>
using namespace std;

/*void preFix(vector<int>&v){                             //

    for(int i=1; i<=v.size(); i++){
        v[i]=v[i] + v[i-1];
    }

    
}

int main(){
    vector<int> v;

    int n; cin>>n;

    for(int i=0; i<n; i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }

    preFix(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;
}*/
    bool checkPrefixSuffixSum(vector<int>&v){
        int total_sum = 0;
        for(int i=0; i<v.size(); i++){
            total_sum = total_sum + v[i];
        }
        int prefix_sum=0;
        int suffix_sum;
        for(int i=0; i<v.size(); i++){
            prefix_sum = prefix_sum + v[i];

            suffix_sum = total_sum - prefix_sum;
        

        if(suffix_sum==prefix_sum){
            return true;
        }
        }
        return false;
    }


int main(){

    int n; cin>>n;
    
    vector<int> v;

    for(int i=0; i<n; i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }

    cout<<checkPrefixSuffixSum(v)<<endl;
}