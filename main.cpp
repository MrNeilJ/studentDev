/* Write a class called Student that has two data members - a string variable called name and a double variable called
 * score.  It should have a constructor that takes two values and uses them to initialize the data members.  It should
 * have get methods for both data members (getName and getScore), but doesn't need any set methods.
 *
 * Write a separate function called stdDev that takes two parameters - an array of pointers to Students and the size
 * of the array - and returns the standard deviation for the student scores (the population standard deviation that
 * uses a denominator of N, not the sample standard deviation, which uses a different denominator).
 *
 * (Note: I could have had you use an array of Students for this instead of an array of pointers to Students, but
 * I want you to practice pointer syntax.)
 *
 * The files must be named Student.hpp, Student.cpp and stdDev.cpp.*/

#include <iostream>
#include "Student.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}