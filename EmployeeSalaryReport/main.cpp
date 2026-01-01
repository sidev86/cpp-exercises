#include <fstream>
#include <iostream>

using namespace std;

int main()
{

    double salary;
    double totalPayroll = 0;
    double averageSalary;
    int numEmployees = 0;
    int richEmployees = 0;

    ifstream infile("salary.txt");

    if (!infile)
    {
        cerr << "Could not open file for reading" << endl;
    }

    while (infile >> salary)
    {
        if (salary > 0 && salary < 1000000)
        {
            cout << salary << endl;
            numEmployees++;
            totalPayroll += salary;
            if (salary > 100000)
            {
                richEmployees++;
            }
        }
    }

    averageSalary = (numEmployees > 0) ? totalPayroll / numEmployees : 0.0;

    cout << "\nEmployees Salary Report" << endl;
    cout << "-------------------------" << endl;
    cout << "Number of Employees:          " << numEmployees << endl;
    cout << "Total Payroll:                " << totalPayroll << endl;
    cout << "Average Salary:               " << averageSalary << endl;
    cout << "Over $100000 Earners:         " << richEmployees << endl;
    return 0;
}