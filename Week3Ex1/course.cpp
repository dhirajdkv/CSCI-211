// course.cpp
// Dommaraju, Dhiraj
// ddommaraju
#include <iostream>
using namespace std;

#include "course.h" 

// Class constructor
Course::Course(string dept, int number, int time) {
    this->dept = dept;
    this->number = number;
    this->time = time;
  }

// function definition for print() method
void Course::print()
{
  // the code for the print function goes here
    cout << dept << " " << number << " at " << time << endl;
}
