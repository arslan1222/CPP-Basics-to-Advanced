#include <iostream>
using namespace std;

int main(){
    int array[5];
        
    // for(int i=0; i<5; i++){                            // Taking input using for loop in Arrays 
    //     cin>>array[i];
    // }
    // for(int i=0; i<5; i++){
    //     cout<<array[i]<<endl;

    // }

    for(int &element: array){
      cin>>element;
}
    for(int i=0; i<5; i++){
        cout<<array[i]<<endl;
    }
}
