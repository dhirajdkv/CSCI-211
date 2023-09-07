// to_text.cpp
// Dommaraju, Dhiraj
// ddommaraju

#include <iostream>
using namespace std;

int main() {
    int number;
    while (cin >> number) {
        switch (number) {   // switch to the given input & print it out in text format.
            case 1:
                cout << "one" << endl;  // end line after each output.
                break;
            case 2:
                cout << "two" << endl;
                break;
            case 3:
                cout << "three" << endl;
                break;
            case 4:
                cout << "four" << endl;
                break;
            case 5:
                cout << "five" << endl;
                break;
            case 6:
                cout << "six" << endl;
                break;
            case 7:
                cout << "seven" << endl;
                break;                
            case 8:
                cout << "eight" << endl;
                break;
            case 9:
                cout << "nine" << endl;
                break;
            case 0:
                cout << "zero" << endl;
                break;                        
            default:
                break;
        }
    }
}