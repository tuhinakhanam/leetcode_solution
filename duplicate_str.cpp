#include <iostream>
using namespace std;
string RemoveDuplicates(string s, int k)
{
    string result = "";
    int count[100] = {0};
    for (char c : s)
    {
        result += c;
        int lastIndex = result.size() - 1;
        if (lastIndex > 0 && result[lastIndex] == result[lastIndex - 1])
        {
            count[lastIndex] = count[lastIndex - 1] + 1;
        }
        else
        {
            count[lastIndex] = 1;
        }
        if (count[lastIndex] == k)
        {
            result.erase(result.size() - k, k);
        }
    }
    return result;
}
int main()
{
    string s = "deeedbbcccbdaa";
    int k = 3;
    string ans = RemoveDuplicates(s, k);
    cout << ans;
}