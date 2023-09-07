#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    int index = 0;
    while (index < n) {
        if (arr[index] == x)
            return index;
        index++;    
    }
    return -1;
}

int binarySearch(int arr[], int n, int x) {
    int middleIndex = n/2;
    int firstIndex = 0;
    int lastIndex = n-1;
    while (lastIndex > firstIndex) {
        if (arr[middleIndex] == x) {
            return middleIndex;
        }
        else if (arr[middleIndex] > x) {
            lastIndex = middleIndex - 1;
            n = middleIndex / 2;
        } else if (arr[middleIndex] < x) {
            firstIndex = middleIndex + 1;
            n = middleIndex / 2;
        }
    }
}

