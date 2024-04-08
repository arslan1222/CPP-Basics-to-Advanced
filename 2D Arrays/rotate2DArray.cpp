#include<iostream>
#include<vector>
using namespace std;

// void rotateArray(vector<vector<int>&vec){

//     int n = vec().size;
//     // transpose
//     for(int i=0; i<n; j++){
//         for(int j=0; j<i; j++){
//             swap(vec([i][j], vec[j][i]));
//         }
//     }

//     // reverse every row

//     for(int i=0; i<n; i++){
//         reverse(vec[i].begin(), vec[i].end());
//     }
//     return;
// }

// int main(){
    
//     int n; cin>>n;
    
//     vetor<vector<int> > (n, vector<int> (n);

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cin>>vec[i][j];
//         }
//     }
//     rotateArray(vec);

//     fot(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<vec[i][j]<<" ";
//         }cout<<endl;
//     }
// }


int prefixSum(vector<vector<int> >&matrix, int l1,int r1,int l2,int r2){
    int sum=0;
    for(int i =l1; i<=l2; i++){ 
        for(int j=r1; j<=r2; j++){
            sum+=matrix[i][j];
        }
    }
    return sum;
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> matrix(n, vector<int> (m));

    for(int i=0; i<n; i++){
        for(int j; j<m; j++){
            cin>>matrix[i][j];
        }
    }
    int l1, r1, l2,r2;
    cin>>l1>>l2>>r1>>r2;

    for(int i=0; i<n; i++){
        for(int j; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }

    int sum = prefixSum(matrix,l1,r1,l2,r2);
    cout<<sum<<endl;
    return 0;

}    