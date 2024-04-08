#include<iostream>
#include<vector>
using namespace std;                               // Find tje total number of pairs in the array whose sum is equal to the given value x.

int main(){
/*   vector <int> v(7);                            // Full program using vector
    
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }

    // Enter the number for sum
    cout<<"Enter a number: ";
    int x;
    cin>>x;
    int y=0;
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i]+v[j]==x){
                y++;
            }
        }
    }
    cout<<y<<endl;      */

/*   int arr[]={3,2,4,1,6};                            // Full program using Arrays      

    int size =5;
    int num = 6;
    int ans=0;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j]==num){
                ans++;
            }
        }
    }                                    // Rfind the unique number in a given Array where sll the elenents
        
        cout<<ans<<endl;  */
                                            // are being repeated twice with one value being unique
//            arr[i]=arr[j]=-1;
//             }
//         }
//     }

//     int ans =0;
//     for(int i=0; i<size; i++){
//         if(arr[i]>0){
//             ans = arr[i];
//         }int arr[]= {2,1,3,2,1,4,3};
//     int size =7;

//     for(int i=0; i<size; i++){
//         for(int j=i+1; j<size; j++){
//             if(arr[i]==arr[j]){
         
//     }
//     cout<<ans<<"\n";


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

    return 0;

}
