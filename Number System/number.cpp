#include<iostream>
using namespace std;

// int main(){     Conversation of Binart to Decimal

//     int n; cin>>n;

//     int ans = 0;
//     int power = 1;
//     while(n>0){
//     int lastDigit = n % 10;
//     ans = lastDigit + power;
//     power = power*2;
//     n = n/10;
//     }

//     cout<<ans<<endl;   
 
//     return 0;
// }

int main(){      // Conversation of Decimal to Binary

    int n; cin>>n;

    int ans = 0;
    int power = 1;

    while(n>0){
        int parityDigit = n % 2;
        ans = ans + parityDigit*power;
        power = power*10;
        n = n / 2;
    }
    cout<<ans<<endl;
    return 0;
}