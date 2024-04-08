#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() -1;

    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == target)
            return mid;
        if(arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    vector<int> arr = {10, 15, 45, 67, 85, 100};
    int target = 67;
    int result = binarySearch(arr, target);
    if(result != -1)
        cout<<target<< " is at index " <<result<<endl;
    else
        cout<<"Given number is not founded"<<endl;
    return 0;
}
