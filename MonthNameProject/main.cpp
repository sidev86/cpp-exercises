#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

string getMonthNumber(int monthNumber);

int main()
{
    int monthNumber;
    string monthStr;

    cout << "Enter the month number: " << endl;
    cin >> monthNumber;

    try
    {
        monthStr = getMonthNumber(monthNumber);
        cout << "Month " << monthNumber << " is " << monthStr << "." << endl;
    }
    catch (const out_of_range &err)
    {
        cout << "Caught Exception: " << err.what() << endl;
    }
}

string getMonthNumber(int monthNumber)
{
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    if (monthNumber < 1 || monthNumber > 12)
    {
        throw out_of_range("Month number must be between 1 and 12");
    }

    return months[monthNumber - 1];
}
