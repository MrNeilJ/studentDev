//
// Created by Scrup on 2/28/2017.
//

#include "Student.hpp"
#include <string>



/**************************************************************
 *                  Student::Student
 * Description: Constructor that allows the user to set the
 * internal objects for the class.
**************************************************************/
void Student::Student(std::string userName, double userScore) {
    name    = userName;
    score   = userScore;
}

std::string Student::getName() {
    return name;
}

double Student::getScore() {
    return score;
}