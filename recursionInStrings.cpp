// check palindrome
#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string str, int start, int end) {
    // base case
    if (start >= end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }

    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string str = "aba";
    cout << isPalindrome(str, 0, str.size() - 1);

    return 0;
}