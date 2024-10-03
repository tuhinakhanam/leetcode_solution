#include<iostream>
#include <vector>
using namespace std;
string removeDuplicates(string s, int k)
{
    vector<int> count(s.size());
    int slow = 0;

    for (int fast = 0; fast < s.size(); ++fast)
    {
        s[slow] = s[fast];

        if (slow > 0 && s[slow] == s[slow - 1])
        {
            count[slow] = count[slow - 1] + 1;
        }
        else
        {
            count[slow] = 1;
        }

        if (count[slow] == k)
        {
            slow -= k;
        }

        slow++;
    }

    return s.substr(0, slow);
}

int main() {
    string s = "pbbcggttciiippooaais";
    int k = 2;
    string ans = removeDuplicates(s, k);
    cout << ans;
    return 0;
}