#include<iostream>
#include<math.h>
using namespace std;

// int main(){
 /*   int array[]={1,2,1,3,2,3,4};                   // Find the unique value of the given array
    for(int i=0; i<=7; i++){
        for(int j=i+1; j<=7; j++){

        
        if(array[i]==array[j]){
            array[i]=array[j]=-1;
        }
        }
    }

    int unique=0;
    for(int i=0; i<=7; i++){
        if(array[i]>0){
            cout<<array[i]<<endl;
        }
    }       */


    int largestelargestElementIndex(int array[], int size){
        int max =INT8_MIN;
        for(int i=0; i<size; i++){
            if(array[i]>max){
                max=array[i];
            }
        }
    }
    int main(){
        int array[]={2,6,8,9,5,4};
        int indexoflargest = largestElementIndex(array,6);
        int indexofsecondlargest = 

        cout<<array[indexofsecondlargest]<<endl;

    }
    
