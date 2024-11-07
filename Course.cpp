#include "Course.h"

Course::Course(){


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

