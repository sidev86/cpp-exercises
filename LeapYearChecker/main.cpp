#include <iostream>

using namespace std;

int main()
{
    int startingYear;
    int endingYear;

    cout << "**** LEAP YEAR CHECKER ****" << endl;
    cout << "This software helps you to quickly find all the leap years between a range." << endl;

    cout << "Please insert the starting year of the range: ";
    cin >> startingYear;
    cout << "Insert the ending year of the range: ";
    cin >> endingYear;

    for (int year = startingYear; year <= endingYear; year++)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            cout << year << " is a leap year" << endl;
        }
        else
        {
            cout << year << " is not a leap year" << endl;
        }
        }
    return 0;
}