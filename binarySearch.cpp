// // linear search
// #include<iostream>
// using namespace std;

// bool isPresent(int arr[], int size, int index, int x) {
//     // base case   
//     if (arr[index] == x) {
//         return true;
//     }
//     if (index == size) {
//         return false;
//     }

//     return isPresent(arr, size, index + 1, x);
// }

// int main() {
//     int arr[5] = { 1,2,3,4,5 };
//     cout << isPresent(arr, 5, 0, 4);
//     return 0;
// }

// binary search
#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int x) {
    // base case
    if (start > end) {
        return false;
    }

    int mid = start + (end - start) / 2;
    if (arr[mid] == x) {
        return true;
    }
    else if (arr[mid] < x) {
        // start = mid + 1
        return binarySearch(arr, mid + 1, end, x);
    }
    else {
        // when arr[mid] > x
        // end = mid - 1
        return binarySearch(arr, start, mid - 1, x);
    }
}

int main() {
    int arr[5] = { 1,2,3,4,5 };
    cout << binarySearch(arr, 0, 4, 3);
    return 0;
}