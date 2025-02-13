#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool isPalindrome(string s) {
    int st = 0;
    int end = s.size() - 1;

    while(st < end) {
        if(s[st] != s[end]) {
            return false;
            break;
        }
        st++;
        end--;
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    cout << isPalindrome(s) << endl;

    return 0;
}
