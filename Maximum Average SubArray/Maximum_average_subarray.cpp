#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double findMaxAverage(vector<int> &nums, int k)
{
    // Calculate the sum of the first window of size k
    double current_sum = 0;
    for (int i = 0; i < k; ++i)
    {
        current_sum += nums[i];
    }

    // Initialize max_sum to current_sum
    double max_sum = current_sum;

    // Slide the window across the array
    for (int i = k; i < nums.size(); ++i)
    {
        current_sum += nums[i] - nums[i - k];
        max_sum = max(max_sum, current_sum);
    }

    // Calculate the maximum average
    return max_sum / k;
}

int main()
{
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    if (k > n)
    {
        cout << "Error: k should be less than or equal to the number of elements in the array." << endl;
        return 1;
    }

    double result = findMaxAverage(nums, k);
    cout << "The maximum average of a subarray of length " << k << " is: " << result << endl;

    return 0;
}
