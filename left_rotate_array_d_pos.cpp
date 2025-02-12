#include <iostream>
#include <vector>

using namespace std;

void leftRotateByd(vector<int> &arr, int n, int d)
{
    vector<int> temp(d);
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    arr.insert(arr.end() - d, temp.begin(), temp.end());
}

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);

    if (n <= 0)
    {
        cout << "invalid input!" << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    leftRotateByd(arr, n, d);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}