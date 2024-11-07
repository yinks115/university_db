#ifndef STUDENT_H // Include guard
#define STUDENT_H

#include "Course.h"
#include <string>
#include <vector>
#include <utility>
#include <iostream>
using namespace std;

enum GRADE {FRESHMAN, SOPHOMORE, JUNIOR, SENIOR};

class Student {
public:
    Student(string name, GRADE grade, string major, int ID);// Constructor
    Student();
    ~Student();

    //getters
    void displayInfo();
    void displayClasses(); //will iterate through the 
    string getName();
    GRADE getGrade(); //returns grade level
    double getGPA();
    string getMajor();
    string getID();
    int getNumClasses();
    int getNumCredits();


    //methods below will need to update the database
    void updateName(string newName); 
    void updateGradeL(GRADE newGrade); //updates the grade level.
    void updateMajor(string newMajor); 
    //void deleteStudent(); dont need this since there's no memmory allocation
    void addClass(string course_id, char letterGrade); //don't forget to increment m_numClasses
    void deleteClass(string course_id);


private:
    string m_name;
    GRADE m_grade;
    string m_major;
    int m_numClasses; //number of classes taken
    int m_numCredits;
    double m_gpa;
    string m_id;
    //A vector of pairs. 1st item of pair is id of a class while
    //the 2nd item is the letter grade received for said class
    vector<pair<string, char>> m_classes;

    void calculateGPA();

};

#endif // STUDENT_H