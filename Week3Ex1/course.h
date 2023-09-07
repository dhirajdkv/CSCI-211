// course.h
// Dommaraju, Dhiraj
// ddommaraju
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
using namespace std;

class Course
{
 public:
    // public member functions
    Course(string dept, int number, int time);
    void print();
 private:
    // member variables
    string dept;
    int number;
    int time;

};

#endif
