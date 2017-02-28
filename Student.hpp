//
// Created by Scrup on 2/28/2017.
//

#ifndef STUDENTDEV_STUDENT_HPP
#define STUDENTDEV_STUDENT_HPP

#include <string>

class Student {
private:
    std::string name;
    double      score;

public:
    // Constructor
    void Student(std::string userName, double userScore);
    std::string Student::getName();


};


#endif //STUDENTDEV_STUDENT_HPP
