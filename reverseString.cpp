#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

string reverseString(vector<char>& s) {
    int st = 0;
    int end = s.size() - 1;

    while(st < end) {
        swap(s[st], s[end]);
        st++;
        end--;
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<char> s(n);
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    reverseString(s);
    for(int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }

    return 0;
}
