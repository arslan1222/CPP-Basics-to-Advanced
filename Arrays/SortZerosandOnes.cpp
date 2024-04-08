#include<iostream>
#include<vector>
using namespace std;

/*void sortZeroesAndOnes(vector<int>&v){

    int zeroes_count =0;
    for(int i=0; i<v.size(); i++){
        if(v[i]==0){
            zeroes_count++;
        }
    }
    for(int i=0; i<v.size(); i++){

    
        if(i<zeroes_count){
            v[i]=0;
        }else{
            v[i]=1;
        }

    }

    }


int main(){

    vector<int>v;

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sortZeroesAndOnes(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl; }*/

                                                    //Two Pointers // Sorting zeroes and Ones


void sortZeroesAndOnes(vector<int> &v){

    int left_ptr = 0;
    int right_ptr = v.size()-1;

    while(left_ptr<right_ptr){
        
        if(v[left_ptr]==1 && v[right_ptr]==0){
            left_ptr = 0;
            right_ptr = 1;

            left_ptr++;
            right_ptr--;
        }
        if(v[left_ptr]==1){
            left_ptr++;
        }
        if(v[right_ptr]==0){
            right_ptr--;
        }


    

    }

}
        
int main(){

    vector<int>v;

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sortZeroesAndOnes(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

} 