#ifndef COURSE_H // Include guard
#define COURSE_H

#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Course {
public:
    Course(); // Constructor

    void displayInfo();
    int getCredits();
    string getName();
    string getID();
    string getDesc();

    //the methods below will change database
    void changeName(string newName);
    void changeDesc(string newDesc);
    void changeCred(int newCred);
    //void deleteCourse(); no memory allocation so this func isn't needed

private:
    string m_id;
    string m_name;
    int m_credits;
};

#endif // COURSE_H