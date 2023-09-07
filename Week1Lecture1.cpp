/*
Week1 Lecture1
Lecture on:
1. int & int max and min values -> (2^31 - 1) for max int and (2^31) for min int value.
2.
3. Linear search -> return the index of the arr.
4. DO NOT USE FOR LOOPS.
*/

int search(int arr[], int x, int len) {
    for (int i = 0; i < len; i++){
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int search(int arr[], int x, int len) {
    int index = 0;
    while (index < len) {
        if (arr[index] == x) {
            return index;
        }
        index++;
    }
    return -1;
}