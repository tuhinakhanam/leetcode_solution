#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class solution
{
public:
    vector<int> productExpectSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> result(n, 1);

        for (int i = 1; i < n; i++)
        {
            result[i] = result[i - 1] * nums[i - 1];
        }

        int rightproducts = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            result[i] *= rightproducts;
            rightproducts *= nums[i];
        }

        return result;
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
    vector<int> result = solution.productExpectSelf(nums);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}