#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;
class solution
{
public:
    int maxprofit(vector<int> &prices)
    {
        int min_price = INT_MAX;
        int max_profit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            int price = prices[i];
            if (price < min_price)
            {
                min_price = price;
            }
            int profit = price - min_price;
            if (profit > max_profit)
            {
                max_profit = profit;
            }
        }

        return max_profit;
    }
};

int main()
{
    solution solution;
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    int result = solution.maxprofit(prices);
    cout << result;
    return 0;
}