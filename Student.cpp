#include "Student.h"
using namespace std;

Student::Student(string name, GRADE grade, string major, string ID){

    m_name = name; m_grade = grade; m_major = major; m_id = ID;

}

void Student::displayClasses(){

    /*
    Iterates through the classes vector and prints out classes 
    along with the grade received
    */

    cout << "Displaying classes for " << m_id << " (" << m_name << "):\n";

    //we're gonna create an iterator to iterate through the m_classes
    //each element is a pair so we first display the first element of 
    //the pair then the second element
    for (vector<pair<string, char>>::iterator itr = m_classes.begin(); itr != m_classes.end(); itr++){

        //need to figure out which class corresponds to the class ID
        //will probably need to check the data base
        (*itr).first;
    }

}

void Student::displayInfo(){

    /*
    displays students' name, grade level, id, gpa, num of credits
    and num of classess
    */

    cout << "Name: " << m_name << endl;
    switch (m_grade){
        case 0:
            cout << "Grade Level: Freshman\n";
            break;
        case 1:
            cout << "Grade Level: Sophomore\n";
            break;
        case 2:
            cout << "Grade Level: Junior\n";
            break;
        case 3:
            cout << "Grade Level: Senior\n";
            break;
    }
    cout << "ID: " << m_id << endl;
    cout << "GPA: " << m_gpa << endl;
    cout << "Major: " << m_major;
    cout << "Number of Classes Taken: " << m_numClasses << endl;
    cout << "Total Credits: " << m_numCredits << endl;

}

string Student::getName(){
    return m_name;
}

GRADE Student::getGrade(){
    return m_grade;
}

double Student::getGPA(){
    return m_gpa;
}

string Student::getMajor(){
    return m_major;
}

string Student::getID(){
    return m_id;
}

int Student::getNumClasses(){
    return m_numClasses;
}

int Student::getNumCredits(){
    return m_numCredits;
}


void Student::updateName(string newName){

    m_name = newName;

    //code below is to make a query to change the name in the data base
}

void Student::updateGradeL(GRADE newGrade){

    m_grade = newGrade;

    //code below is to make a query 
}

void Student::updateMajor(string newMajor){

    m_major = newMajor;

    //code below is to make a query

}

//void Student::deleteStudent(){}

void Student::addClass(string course_id, char letterGrade){

    //need to make a query to check if the class exists in our database

    //checks if class already exists in the vector list
    for (vector<pair<string, char>>::iterator itr = m_classes.begin(); itr != m_classes.end(); itr++){

        if (itr->first == course_id){
            return;
        }
    }


    pair<string, char> toAdd(course_id, letterGrade);
    m_classes.push_back(toAdd);

    //updates the gpa
    calculateGPA();
    //code below is to make a query to update the data base
}

void Student::deleteClass(string course_id){

    //finds location of course in m_classes then removes it if it exists
    for (vector<pair<string, char>>::iterator itr = m_classes.begin(); itr != m_classes.end(); itr++){

        if (itr->first == course_id){
            m_classes.erase(itr);

            //calculates new gpa
            calculateGPA();

            //making a query to delete class from student in the database


            return;
        }
        
    }

}

void Student::calculateGPA(){

/*
GPA formula: (c1*g1 + c2*g2 + ... cn*gn)/ (c1+c2+...cn)
cn is the credit of a class
gn is the value of the letter grade received for that class

A = 4
B = 3
C = 2
D = 1
F = 0
*/

//logic: iterate through the m_classes vector. For every class make
//a query to the university database to get the credits of the class
//then apply the formula

}


