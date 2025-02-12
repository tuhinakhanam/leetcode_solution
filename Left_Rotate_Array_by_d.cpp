#include<iostream>
#include<vector>

using namespace std;

void reverseArray(vector<int> &arr, int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void leftRotateByd(vector<int> &arr, int n, int d) {
   d = d % n;

   reverseArray(arr, 0, d - 1);

   vector<int> temp2(n - d);
   for(int i = 0; i < n-d; i++) {
        temp2[i] = arr[d+i];
   }

   reverseArray(arr, d, n - 1);

   reverseArray(arr, 0, n - 1);
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    if( n <= 0) {
        cout << "invalid! input" << endl;
    }
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
leftRotateByd(arr, n, d);

for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
return 0;
}
