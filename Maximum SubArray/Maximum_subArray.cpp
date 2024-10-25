#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int current_sum = nums[0];
        int max_sum = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            current_sum = max(nums[i], current_sum + nums[i]);
            if (current_sum > max_sum)
            {
                max_sum = max(current_sum, max_sum);
            }
        }
        return max_sum;
    }
};

int main()
{
    solution solution;
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int result = solution.maxSubArray(nums);
    cout << result;
    return 0;
}