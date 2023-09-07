#include <iostream>
using namespace std;

int func1(int x, char a, int *ptr) {
    int output = 6;
    return output;
}


int main() {
    int x = 5;
    char a = 'a';
    int *ptr = &x;
    int result = func1(x,a,ptr);
    cout << result;
}