#include <iostream>
using namespace std;

void printEvenNumbers(int current, int limit) {
    if (current > limit) {
        return;
    }
    if (current % 2 == 0) {
        cout << current << " ";
    }
    printEvenNumbers(current + 2, limit);
}

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    printEvenNumbers(0, limit);

    return 0;
}





// #include<iostream>
// using namespace std;

// int fact(int n) {
//     // base case
//     if (n == 0) {
//         return 1;
//     }
//     return n * fact(n - 1);
// }

// int main() {
//     int n;
//     cin >> n;

//     int ans = fact(n);
//     cout << ans << endl;
//     return 0;
// }





// #include<iostream>
// using namespace std;

// int fib(int n) {
//     // base case
//     if (n <= 1) {
//         return n;
//     }
//     return fib(n - 1) + fib(n - 2);
// }

// int main() {
//     int n;
//     cin >> n;

//     cout << fib(n);

//     return 0;
// }





