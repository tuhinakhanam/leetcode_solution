#include<iostream>
using namespace std;
// function to generate all permutations of a string using backtracking
void permutation(string & str, int i) {
    // base case
    if(i >= str.length()) {
        cout << str << " ";
        return;
    }

    //swapping
    for(int j = i; j < str.length(); j++) {
        swap(str[i], str[j]);

        // recursive call

        permutation(str, i + 1);

        // backtracking

        swap(str[i], str[j]);
    }
}

int main() {
    string str = "abc";
    int i = 0;
    permutation(str, i);
    return 0;
}
