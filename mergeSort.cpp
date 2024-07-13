#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
    vector<int>temp(end - start + 1);
    int left = start, right = mid + 1, index = 0;

    while (left <= mid && right <= end) {
        if (arr[left] <= arr[right]) {
            temp[index] = arr[left];
            index++;
            left++;
        }
        else {
            temp[index] = arr[right];
            index++;
            right++;
        }

    }
    // left array not empty
    while (left <= mid) {
        temp[index] = arr[left];
        index++;
        left++;
    }
    // right array not empty
    while (right <= end) {
        temp[index] = arr[right];
        index++;
        right++;
    }
    index = 0;
    // put values in array
    while (start <= end) {
        arr[start] = temp[index];
        start++;
        index++;
    }
}

void mergesort(int arr[], int start, int end) {
    // base case
    if (start == end) {
        return;
    }

    int mid = start + (end - start) / 2;
    // left
    mergesort(arr, start, mid);
    // right
    mergesort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

int main() {
    int arr[5] = { 9,2,5,4,7 };
    mergesort(arr, 0, 4);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}