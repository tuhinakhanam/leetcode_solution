#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool CheckSorted(vector<int> &arr, int i, int &n) {
    // Base Case
    if(i == n-1) {
        return true;
    }

    // Recursive Case
    if(arr[i+1] < arr[i]) {
        return false;
    }

    return CheckSorted(arr, i+1, n);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int i = 0;

    bool isSorted = CheckSorted(arr, i, n);
    if(isSorted) {
        cout << "Array is sorted" << endl;
    }
    else {
        cout << "Array is not sorted" << endl;
    }

}