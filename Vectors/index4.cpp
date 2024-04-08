#include<iostream>
using namespace std;


    int largestElementIndex(int arr[], int size){
        int max=INT_MIN;
        int maxindex=-1;
        for(int i=0; i<size; i++){
            if(arr[i]>max){
                max=arr[i];
                maxindex=i;
            }
        }
        return maxindex;
}

    int main(){

        int arr[]={2,3,5,7,6,1};
        int indexoflargest =largestElementIndex(arr, 6);
        arr[indexoflargest]=-1;
        int indexofsecondlargest = largestElementIndex(arr, 6);
        cout<<arr[indexofsecondlargest]<<endl;

        return 0;
}
