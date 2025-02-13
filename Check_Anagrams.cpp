#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool areAnagrams(string str1, string str2)
{
    // Step 1: If lengths are not equal, they can't be anagrams
    if (str1.length() != str2.length())
    {
        return false;
    }

    // Step 2: Count frequency of each character in str1
    unordered_map<char, int> charCount;
    for (char ch : str1)
    {
        charCount[ch]++;
    }

    // Step 3: Decrease frequency based on str2
    for (char ch : str2)
    {
        charCount[ch]--;
    }

    // Step 4: Check if all counts are zero
    for (auto it : charCount)
    {
        if (it.second != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (areAnagrams(str1, str2))
    {
        cout << "The strings are anagrams!" << endl;
    }
    else
    {
        cout << "The strings are NOT anagrams!" << endl;
    }

    return 0;
}
