#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void findDuplicateChar(string s)
{ // Fixed function name
    unordered_map<char, int> mp;

    // Count occurrences of each character
    for (char ch : s)
    {
        mp[ch]++;
    }

    // Print duplicate characters
    for (auto it : mp)
    {
        if (it.second > 1)
        {
            cout << it.first << " ";
        }
    }
    cout << endl; // Print new line for better output format
}

int main()
{
    string s;
    cin >> s;

    findDuplicateChar(s); // Call function

    return 0;
}
