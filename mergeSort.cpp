#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& arr, int l, int m, int r) {

    vector<int> left(arr.begin() + l, arr.begin() + m + 1);
    vector<int> right(arr.begin() + m + 1, arr.begin() + r + 1);

    int i = 0; int j = 0; int k = l;

    while(i < left.size() && j < right.size()) {
        
        if(left[i] < right[j]) {
            arr[k++] = left[i++];
        }

        else{
                arr[k++] = right[j++];
            }
        }

        while(i < left.size()) {

            arr[k++] = left[i++];
        }
        while(j < right.size()) {

            arr[k++] = right[j++];
        }
    }

    void mergeSort(vector<int>& arr, int l, int r) {
        if(l < r) {
            int m = l + (r - l) / 2;

            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }

    int main() {
        vector<int> arr = {4, 2, 7, 1};
        int l = 0;
        int r = arr.size() - 1;
        mergeSort(arr, l, r);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " "<< endl;
        }
        return 0;
    }