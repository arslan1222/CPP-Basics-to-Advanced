#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,10,15,20,25};
    int size =  5;
    int x = 10;
    // code to check whether there is any pairr with a given abs diff or not

    int i = 0;
    int j = 1;
    bool found = false;

    while(i < size and j < size){
        if(abs(arr[i] - arr[j]) == x){
            found = true;
        }else if(abs(arr[i] - arr[j]) < x){
            j++;
        }else{
            i++;
        }
    }

    if(found == true){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


}