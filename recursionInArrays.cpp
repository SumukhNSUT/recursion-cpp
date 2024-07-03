// print array using recursion
#include<iostream>
using namespace std;

void print(int arr[], int index, int size) {
    // base case
    if (index == size) {
        return;
    }
    cout << arr[index] << endl;
    print(arr, index + 1, size);
}

int main() {
    int arr[4] = { 1, 2, 3, 4 };
    print(arr, 0, 4);
    return 0;
}

// // print reverse of array
// #include<iostream>
// using namespace std;

// void print(int arr[], int index, int size) {
//     // base case
//     if (index == size) {
//         return;
//     }
//     print(arr, index + 1, size);
//     cout << arr[index] << endl;
// }

// int main() {
//     int arr[4] = { 1, 2, 3, 4 };
//     print(arr, 0, 4);
//     return 0;
// }

// // sum of elements of array
// #include<iostream>
// using namespace std;

// int sum(int arr[], int size, int index) {
//     // base case
//     if (index == size) {
//         return 0;
//     }
//     int ans = arr[index] + sum(arr, size, index + 1);
//     return ans;
// }

// int main() {
//     int arr[3] = { 1,2,3 };
//     int ans = sum(arr, 3, 0);
//     cout << ans << endl;
//     return 0;
// }