#include<iostream>
using namespace std;

int main(){
    int arr[]={-1,0,1,2,3};
    int size =5;
    int x =7;
    // Code to find if there is a pair with sum x
    int i=0;
    bool found = false;
    int j= size - 1;

    while(i < j){
        if(arr[i] + arr[j] == x){
            //We found a pair
            found = true;
            break;
        }
        else if(arr[i] + arr[j] < x){
            // sum is less than x, increace the sum
            i++;
        }
        else{
            // sum is greater than x, decreas the sum
            j--;
        }
    }

    if(found == true){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    
}