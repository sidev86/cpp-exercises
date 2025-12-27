#include <iostream>
#include <stdexcept>

using namespace std;

void processPositive(int num);
void doSomething(int num);

int main()
{
    int number;
    try
    {
        cout << "Enter a number to process: ";
        cin >> number;

        doSomething(number);
        cout << "Yeaa main processed the number succesfully!" << endl;
    }
    catch (const invalid_argument &err)
    {
        cout << "Error detected in main: ";
        cout << err.what() << endl;
    }
    catch (const out_of_range &err)
    {
        cout << "Error detected in main: ";
        cout << err.what() << endl;
    }

    return 0;
}

void processPositive(int num)
{
    cout << "---Welcome to the positive integer processor---" << endl;
    if (num >= 0 && num <= 100)
    {
        cout << "OK! Positive Processing test passed!" << endl;
    }
    else if (num > 100)
    {
        throw out_of_range("Number exceed the limit! (max 100)");
    }
    else
    {
        throw invalid_argument("Negative number passed in!");
    }
}
void doSomething(int num)
{
    try
    {
        processPositive(num);
        cout << "Yea! doSomething could process the num!" << endl;
    }
    catch (const invalid_argument &err)
    {
        cout << "doSomething says there is a problem!" << endl;
        throw;
    }
    catch (const out_of_range &err)
    {
        cout << "doSomething says there is a problem!" << endl;
        throw;
    }
}
