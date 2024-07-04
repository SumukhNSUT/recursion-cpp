// // check palindrome
// #include<iostream>
// #include<string>
// using namespace std;

// bool isPalindrome(string str, int start, int end) {
//     // base case
//     if (start >= end) {
//         return true;
//     }

//     // not matched
//     if (str[start] != str[end]) {
//         return false;
//     }
//     // matched
//     else {
//         return isPalindrome(str, start + 1, end - 1);
//     }
// }

// int main() {
//     string str = "aabaa";
//     cout << isPalindrome(str, 0, str.size() - 1);

//     return 0;
// }

// count vowels
// #include<iostream>
// #include<string>
// using namespace std;

// int countVowels(string str, int index) {
//     int count = 0;
//     // base case
//     if (index == str.size()) {
//         return 0;
//     }
//     // when matches with vowel
//     if ((str[index] == 'a') || (str[index] == 'e') || (str[index] == 'i') || (str[index] == 'o') || (str[index] == 'u')) {
//         count++;
//     }
//     return count + countVowels(str, index + 1);
// }

// int main() {
//     string str = "bcd";
//     int ans = countVowels(str, 0);
//     cout << ans << endl;
//     return 0;
// }

// // reverse a string
// #include<iostream>
// #include<string>
// using namespace std;

// void rev(string& str, int start, int end) {
//     // base case
//     if (start >= end) {
//         return;
//     }

//     swap(str[start], str[end]);
//     rev(str, start + 1, end - 1);
// }

// int main() {
//     string str = "abcd";
//     rev(str, 0, 3);
//     cout << str << endl;
//     return 0;
// }