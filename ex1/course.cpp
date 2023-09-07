// Replace my_class and My_class with the actual class name

// A class's .cpp file always includes that class's .h file
// never include a .cpp file!
#include <iostream>
using namespace std;

#include "course.h" 

// Add class contructor here...
Course::Course(string dept, int number, int time){};
// example of how class methods are specified
void Course::print()
{
  // the code for the print function goes here
    cout << dept << " " << number << " at " << time << endl;
}
