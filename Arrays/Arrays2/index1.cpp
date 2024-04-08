#include<iostream>
using namespace std;
int main(){
                                                    // Basic operations on Arrays

    // int array[]={1,2,3,4,5};
    // cout<<sizeof(array)<<endl;                   // Length of Array is (20)
    // cout<<sizeof(array[0])<<"\n";                // Size of one element of array is   (4)

    // int size = sizeof(array)/sizeof(array[0]);      // size of Array

    // for(int i =0; i<size; i++){                     // Using of for loop with Arrays
    //     cout<<array[i]<<endl;
    // }

    // for(int ele: array){                            // Using of for each loop with arrays
    //     cout<<ele<<"\n";
    // }

    // int index =0;
    // while(index<size){                                 // Using of while loop with Arrays
    //     cout<<array[index]<<"\n";
    //     index++;
    // }
    
    int array[5]={};
        
    for(int i=0; i<5; i++){                            // Taking input using loops in Arrays 
        cin>>array[i];
    }
    for(int i=0; i<5; i++){
        cout<<array[i]<<endl;


    }
}