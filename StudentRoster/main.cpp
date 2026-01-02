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
    int honorStudents = 0;
    double gpa;
    double gpaSum = 0.0;
    double avgGpa;

    if (!infile)
    {
        cerr << "Could not open file for reading" << endl;
        return 1;
    }

    while (infile >> firstName >> lastName >> gpa)
    {
        students.push_back(new Student(firstName, lastName, gpa));
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "\nSTUDENT ROSTER" << endl;
    cout << "--------------------------------" << endl;

    for (auto student : students)
    {
        double studentGpa = student->getGPA();
        cout << setw(20) << left << student->getFullName() << "  GPA: " << studentGpa << endl;
        gpaSum += studentGpa;
        if (studentGpa >= 3.5)
        {
            honorStudents++;
        }
    }

    avgGpa = (students.size() > 0) ? gpaSum / students.size() : 0.0;
    cout << "\n\nClass Average GPA: " << avgGpa << endl;
    cout << "Honor Students: " << honorStudents << endl;
    infile.close();

    // cleanup
    for (auto student : students)
    {
        delete student;
    }

    students.clear();
    return 0;
}