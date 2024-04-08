#include <iostream>
using namespace std;

/*int f(int p, int q){
    // Base Case
    if( q == 0 ) return 1;
    // Selfwork
    return p * f ( p, q -1 );
}

int main(){

    cout<<f(2, 3)<<endl;
    return 0;
} */

int f(int p, int q){         // T.C -> O(log)
    // Base Case
    if(q == 0) return 1;

    if(q % 2 == 0){
    int result = f(p, q/2);
        return result * result;
    }else{
        int result = f(p, (q-1)/2);
        return p * result * result;
    }
}
int main(){

    int res = f(3, 4);
    cout<<res<<endl;
    return 0;
}