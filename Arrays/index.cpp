#include<iostream>
using namespace std;

int main(){

    // int n; cin>>n;

    // int array[n];

    // for(int i=0; i<n; i++){
    //     cin>>array[i];
    // }

    int array[]= {-3,-2,1,3,6,4};
    int n = 6;
    int x; cin>>x;

    int i=0;
    int j=n-1;
    bool found = false;

    while(i < j){
        if(array[i] + array[j] == x){
            found = true;
            break;
        }
        else if(array[i] + array[j] < x){
            i++;
        }
        else{
            j--;
        }
    }

    if(found == true){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}

