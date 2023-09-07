// Replace MY_CLASS and My_class with the actual class name

// Ensure this header file is only included once.
// Use all caps for these
#ifndef COURSE_H
#define COURSE_H

// Add any includes here (such as #include <iostream>)
#include <iostream>
using namespace std;

class Course
{
 public:
  // public member functions go here
  Course(string dept, int number, int time) {
    this->dept = dept;
    this->number = number;
    this->time = time;
  }
  void print();
 private:
    string dept;
    int number;
    int time;
  // member variables go here
  // member function used only by other member functions go here

}; // don't forget this ;

#endif
