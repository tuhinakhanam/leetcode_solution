#include<iostream>
#include<vector>

using namespace std;

pair<int, int> findMinMax(vector<int> &arr, int n) {
        int min = arr[0];
        int max = arr[0];
        for(int i = 1; i <n; i++) {
            if(arr[i] < min) {
                min = arr[i];
            }
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        return {min, max};
    }

    int main() {
        int n;
        cin >> n;
        vector<int> arr(n);

        if (n <= 0)
        { // Handling edge case of empty input
            cout << "Invalid input!" << endl;
            return 0;
        }

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        pair<int, int> result = findMinMax(arr,n);
        cout << result.first <<" "<< result.second << endl;
        return 0;
    }
