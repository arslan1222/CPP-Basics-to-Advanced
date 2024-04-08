#include<iostream>

#include<vector>
using namespace std;


void bucketSort(float arr[], int size){

    vector<vector<float> > bucket(size, vector<float> ());
    // step1

    //step2: incertint element into bucket

    for(int i=0; i<size; i++){
        int index = arr[i] * size;
        bucket[index].push_back(arr[i]);
    }

    //step3: sorting individual buckets

    for(int i=0; i<size; i++){
        if(!bucket.empty()){
            sort(bucket[i].begin(),bucket[i].end());
        }
    }

    //step4: Combinig elements of buckets

    int k=0;
    for(int i=0; i<size; i++){
        for(int j=0; j<bucket[i].size(); j++){
            arr[k++] = bucket[i][j];
        }
    }


}

int main(){

    float arr[] = {0.13, 0.45, 0.12, 0.89, 0.75, 0.85, 0.39};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
