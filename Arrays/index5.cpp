#include<iostream>
#include<vector>
using namespace std;


/*    int array[]= {1,0,0,1,1,0,1};
    int size = sizeof(array)/sizeof(array[0]);
    int zeroElement[3];
    int j=0;
    int zero = 0;
    for(int i=0; i<size; i++){
        if(array[i]==zero){
            zeroElement[j++]=array[i];
        }
    }
    int oneElement[4];
    int k=0;
    int one =1;
    for(int a=0; a<size; a++){
        if(array[a]==one){
            oneElement[k++]=array[a];
        }
        
    }

    int szof2 = sizeof(zeroElement)/sizeof(zeroElement[0]);
    int szof1 = sizeof(oneElement)/sizeof(oneElement[0]);

    for(int i=0; i<szof2; i++){
        cout<<zeroElement[i];
    }
        for(int j=0; j<szof1; j++){
            cout<<oneElement[j];
        }
        cout<<endl;  */

/*        void sortZeroesAndOnes(vector <int> &v){         // Sort an Array consisting of only 0s and 1s. if given 8-> 01101010 -> 00001111

            int zeroes_count =0;
            for(int ele: v){
                if(ele==0){
                    zeroes_count++;
                }
            }

            for(int i=0; i<v.size(); i++){
                if(i<zeroes_count){
                    v[i]=0;
                }
                else{
                    v[i]=1;
                }
            }

        }
        int main(){

        int n;
        cin>>n;
        vector<int> v;

        for(int i=0; i<n; i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }

        sortZeroesAndOnes(v);
        for(int i=0; i<n; i++){
            cout<<v[i];
        }
        cout<<endl;  */

/*   void ASDM(int &x, int &y){
        int temp = x;
        x = y;
        y = temp;

    }

    int main(){

    int x=10;
    int y=20;

    ASDM(x, y);
    cout<<x<<" "<<y<<endl;

}   */                                               // Sort an Array consisting of only 0s and 1s. if given 8-> 01101010 -> 00001111
/*    void sortZeroesAndOnes(vector <int> &v){
        int left_ptr=0;
        int right_ptr=v.size()-1;
    
    while(left_ptr<right_ptr){
        if(v[left_ptr]==1 && v[right_ptr]==0){
            v[left_ptr++]=0;
            v[right_ptr--]=1;
            //left_ptr++;
            //right_ptr--;
        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==1){
            right_ptr--;
        }
    }
    return;
    }

    int main(){

        int n; cin>>n;
        vector<int> v;

        for(int i=0; i<n; i++){
            int ele; cin>>ele;
            v.push_back(ele);
        }

        sortZeroesAndOnes(v);

        for(int i=0; i<n; i++){
            cout<<v[i];
        }
        cout<<endl;     */



/*    // 4 2 3 1 5
    // left_ptr =2
    // right_ptr = 1


    void sortByParity(vector<int> &v){

        int left_ptr = 0;
        int right_ptr = v.size()-1;
        

        while(left_ptr<right_ptr){
                    


            if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
                swap(v[left_ptr], v[right_ptr]);
                left_ptr++;
                right_ptr--;
            }

            if(v[left_ptr]%2==0){
                left_ptr++;
            }
            if(v[right_ptr]%2==1){
                right_ptr--;
            }
        }
    }


int main(){

    int n;
    cin>>n;

    vector<int> v;

    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sortByParity(v);

    for(int i=0; i<n; i++){
        cout<<v[i];
    }
    cout<<endl;

       
           */
/*    void sorting(vector <int> &v){

        vector <int> ans;

        int left_ptr = 0;
        int right_ptr = v.size()-1;

        while(left_ptr<right_ptr){
            if(abs(v[left_ptr])<abs(v[right_ptr])){
                ans.push_back(v[right_ptr]*v[right_ptr]);
                right_ptr--;
            }
            else{
                ans.push_back(v[left_ptr]*v[left_ptr]);
                left_ptr++;
            }
        }

        reverse(ans.begin(), ans.end());
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    int main(){

         int n; cin>>n;
         vector <int> v;

        for(int i=0; i<n; i++){
            int ele; cin>>ele;
            v.push_back(ele);
        }

        sorting(v);


    return 0;      
}                       */