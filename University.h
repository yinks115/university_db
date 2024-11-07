#ifndef UNIVERSITY_H // Include guard
#define UNIVERSITY_H

#include "Student.h"
#include <string>
#include <iostream>
using namespace std;

class University {
public:
    University(); // Constructor
    void myMethod(); // Public method

private:
    int myVariable; // Private data member
};

#endif // UNIVERSITY_H