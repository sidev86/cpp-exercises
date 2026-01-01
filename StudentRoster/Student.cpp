#include "Student.h"

Student::Student(const string &firstName, const string &lastName, double gpa)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->gpa = gpa;
}

string Student::getFullName()
{
    return firstName + " " + lastName;
}

double Student::getGPA()
{
    return gpa;
}