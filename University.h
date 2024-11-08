#ifndef UNIVERSITY_H // Include guard
#define UNIVERSITY_H

#include "Student.h"
#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;

class University {
public:
    University(string, string, string); // Constructor
    //~University();

    string getName();
    string getID();
    string getPass();
    int getNumStudents();
    int getNumClasses();
    void displayInfo(); //not sure how I want this to look yet
    void displayStudent(string);
    void displayClass(string);

    //can change characteristics of a student (except ID) and add/remove classes
    void updateStudent(string);
    void updateClass(string); //can change a class's credits and name

    void addStudent(string, GRADE, string, string);
    void deleteStudent(string);
    void addClass(string, string, int);
    void deleteClass(string);
    void addMajor(string);
    void deleteMajor(string);

    bool findClass(string); //checks if a class exists
    bool findStudent(string);//checks if a student exists
    bool findMajor(string); //checks if a major exists

private:
    string m_name; //name of University
    string m_pass;
    string m_id;
    int m_numStudents;
    int m_numClasses;
    vector<string> m_majors; //list of all majors in the university

    //using a hashmap to store students and classes in the university
    unordered_map<string, Student> m_students; //container of students
    unordered_map<string, Course> m_classes; //container of classes
};

#endif // UNIVERSITY_H