#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student
{
public:
    Student(const string &firstName, const string &lastName, double gpa);
    string getFullName();
    double getGPA();

private:
    string firstName;
    string lastName;
    double gpa;
};

#endif
