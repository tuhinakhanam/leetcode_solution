#include<iostream>
#include<climits>
#include<vector>

using namespace std;

int maxSubArraySum(vector<int> &nums, int n)
{
    int max_sum = INT_MIN;
    int curr_sum = 0;

    for(int i = 0; i < n; i++) {
        curr_sum += nums[i];

        if(curr_sum > max_sum) {
            max_sum = curr_sum;
        }

        if(curr_sum < 0) {
            curr_sum = 0;
        }
    }

    return max_sum;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << maxSubArraySum(nums, n) << endl;
    return 0;
}
