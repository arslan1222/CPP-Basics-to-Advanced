#include<iostream>
#include<vector>
using namespace std;

int main(){

/*    int array[]={9,6,5,7,1};

    int size = sizeof(array)/sizeof(array[2]);
    // int size = sizeof(array)/sizeof(array[0]);


    int n=8;
    int ans = 0;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(array[i]+array[j]==n)
                ans++;
            }
        }
    
        cout<<ans<<endl;  */

                                 //   Count the number pf triplets whose sum is equal to the ginen value x. Using Vector and Array..

        vector<int>v(7);

        for(int i=0; i<=7; i++){
            cin>>v[i];
        }

        // int array[]={1,3,4,5,2,8,9,4};

        // int size = sizeof(array)/sizeof(array[1]);

        int n=7;
        int ans=0;
        for(int i=0; i<7; i++){
            for(int j=i+1; j<7; j++){
                for(int k=j+1; k<7; k++){
                    // if(array[i]+array[j]+array[k]==n){
                        // ans++;
                    // }

                    if(v[i]+v[j]+v[k]==n){
                    ans++;
                    }

                }
            }
        }
        cout<<ans<<endl;
}

