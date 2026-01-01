#include "Student.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ifstream infile("students.txt");

    string firstName;
    string lastName;
    vector<Student *> students;
    double gpa;

    if (!infile)
    {
        cerr << "Could not open file for reading" << endl;
    }

    while (infile >> firstName >> lastName >> gpa)
    {
        students.push_back(new Student(firstName, lastName, gpa));
    }

    for (auto student : students)
    {
        cout << "Name: " << student->getFullName() << ",   GPA: " << student->getGPA() << endl;
    }
    return 0;
}