#include<iostream>
#include<string>

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

    if(isPalindrome(s)) {
        cout << "The string is a palindrome!" << endl;
    }
    else{
        cout << "The string is NOT a palindrome!" << endl;
    }

    return 0;
}
