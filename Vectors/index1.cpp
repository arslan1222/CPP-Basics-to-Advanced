#include<iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> v;
    cout<<" Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<" Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<" Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;


    v.resize(5);
    cout<<" Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.resize(10);
    cout<<" Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

     v.resize(20);
    cout<<" Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();

/* vector <int> v(5);                              // with Size using for loop

    for(int i=0; i<5; i++){
        cin>>v[i];
        v.push_back(i);
    }

    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;   */

//    vector <int> v;                            // Without giving Size  using for loop

   
    // for(int i =0; i<5; i++){
    //      int element;
    //     cin>>element;
    //     v.push_back(element);

    // }

    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    //                                             // Taking output using for each loop
    // for(int ele: v){                   
    //     cout<<ele<<" ";
    // }
    // cout<<endl; 
    // v.insert(v.begin()+2,6);                       // Add a new element using v.inser(position(), new_element);
    //  v.erase(v.end()-2);                           // delete an element using v.eras(v.posintion);

    // int i=0;                                    // Taking output using while loop
    // while(i<v.size()){                          
    //     cout<<v[i++]<<" ";
    // }
   
    // cout<<endl;       

                                                    // Count the number of occurances of a particular ekement x.

        // vector<int> v(6);

        // for(int i=0; i<v.size(); i++){
        //     cin>>v[i];
        // }             

        // cout<<"Enter any number: ";
        // int x;
        // cin>>x;

        // int ele=0;
        // for(int i=0; i<v.size(); i++){                  // output using for loop
        //     if(v[i]==x){
        //         ele = ele + 1;
        //     }
        // }

        // for(int idx: v){                                   // output using for each loop
        //     if(idx==x){
        //         ele = ele + 1;
        //     }
        // }
        // cout<<ele<<"\n"; 

        // int array[]={1,1,1,2,2,2};
        // int anssum = 0;

        // for(int i=0; i<6; i++){
        //     if(i%2==0){
        //         anssum=anssum+array[i];
        //     }
        //     else
        //     {
        //         anssum = anssum-array[i];
        //     }
        // }
        // cout<<anssum<<endl;

        // int y =1;
        // int x = 2;
        // y++;
        // cout<<y<<endl;
        // ++y = x;
        // cout<<y<<endl;


    return 0;
}