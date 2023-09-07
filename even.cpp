// even.cpp
// Dommaraju, Dhiraj
// ddommaraju
#include <iostream>
using namespace std;

int main() {
    int inputNumber;
    bool isOdd = false; // flag to determine if there's an odd number in the input.
    while (cin >> inputNumber) {
        if ((inputNumber % 2) != 0) {   // Module to check if the input number is even/odd. If number%2 == 0, it's even.
            isOdd = true;
        }
    }
    if (isOdd == true) {
        cerr << "not all even" << endl;
        return 1;
    } else {
        cout << "all even" << endl;
    }
    return 0;
}