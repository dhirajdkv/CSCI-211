// chart.cpp
// Dommaraju, Dhiraj
// ddommaraju

#include <iostream>
using namespace std;

/*
Purpose: Function that takes in integer array and it's size 
         and returns maximum value from the list.
Input Parameters: int inputArr[] - integer array (sorted/unsorted); 
                  int inputLength - Number of iterations to be done.
Output/Return Value: int maxValue - Maximum value from the integer array.

*/
int getMaxValue(int inputArr[], int inputLength) {
    int flag = 0;
    int maxValue = 0;
    while (flag < inputLength) {
        if (inputArr[flag] >= maxValue) {
            maxValue = inputArr[flag];
        }
        flag++;
    }
    return maxValue;
}

/*
Purpose: Function that forms the asterisks as per the requirement.
Input Parameters: int inputArr[] - integer array (sorted/unsorted); 
                  int inputLength - Number of iterations to be done inside the array;
                  int maxValue - The buffer number to define the number of iterations/number of rows in the output asterisks.
Output/Return Value: None. Prints out the output as per the requirement.

*/
void formatChart(int inputArr[], int maxValue, int inputLength) {
    while (maxValue > 0) {
        int flag = 0;
        while (flag < inputLength) {
            if (maxValue <= inputArr[flag]) {
                printf("*");
            } else {
                printf(" ");
            }
            flag++;
        }
        maxValue--;
        printf("\n");
    }
}

int main() {
    int const MAX = 100;    // Maximum length of array. 
    int const BREAK_POINT = 0;  // Flag point to stop the inputs.
    int inputLength = 0;    // Length of the input. 
    int inputArr[MAX];
    while (inputLength < MAX) {
        int inputNum;
        cin >> inputNum;
        if (inputNum == BREAK_POINT) {
            break;
        }
        inputArr[inputLength] = inputNum;
        inputLength++;
    }
    int maxValue = getMaxValue(inputArr, inputLength); // Getting maxValue to define number of lines and iterations in the output.
    formatChart(inputArr, maxValue, inputLength);
}
