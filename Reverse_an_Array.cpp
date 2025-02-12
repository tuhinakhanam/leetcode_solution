#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &arr)
{
    int left = 0, right = arr.size() - 1;

    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main()
{
    int n;
    cin >> n;

    if (n <= 0)
    { // Handle edge case explicitly
        cout << "Array is empty!" << endl;
        return 0;
    }

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}