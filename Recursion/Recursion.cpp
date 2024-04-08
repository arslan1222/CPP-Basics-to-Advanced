#include<iostream>
using namespace std;

void reachhouse(int src, int des){

    cout<<"Source "<<src<<" destination "<<des<<endl;
    // Base Case
    if(src == des){
        cout<<"Puhnch gay: "<<endl;
        return;
    }
    src++;
    // Recursive Relation
    reachhouse(src, des);
}

int main(){

    int des = 10;
    int src = 1;

    reachhouse(src, des);



    return 0;
}