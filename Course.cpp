#include "Course.h"

Course::Course(string course_id, string courseName, int numCredits){

    m_id = course_id; m_name = courseName, m_credits = numCredits;

    //makes all the letters in m_name upper case
    transform(m_name.begin(), m_name.end(), m_name.begin(), ::toupper);
}

void Course::displayInfo(){

    cout << m_name << " (" << m_id << ") - " << m_credits << " credits\n";

}

int Course::getCredits(){
    return m_credits;
}

string Course::getName(){
    return m_name;
}

string Course::getID(){
    return m_id;
}


void Course::changeName(string newName){

    m_name = newName;

    //updates data base below
}



void Course::changeCred(int newCred){ //changes credit value of the class

    m_credits = newCred;

    //code below to update data base
}

