#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void printFormatted(const int numValues, ofstream &outfile);
int main()
{
    int numValues;

    cout << "Enter the number of values you would like to print: ";
    cin >> numValues;
    cin.get();
    cout << "Writing to file ..." << endl;

    ofstream outfile("output.txt");

    if (!outfile)
    {
        cerr << "Error: Could not open file for writing" << endl;
        return 1;
    }

    // outfile << "Hello earth!" << endl;

    cout << "Done" << endl;

    cout << fixed << showpoint;
    outfile << fixed << showpoint;

    printFormatted(numValues, outfile);

    outfile.close();
    return 0;
}

void printFormatted(const int numValues, ofstream &outfile)
{
    for (int i = 1; i <= numValues; i++)
    {
        double value1 = i * 5.7575;
        double value2 = i * 3.1459;
        cout << setw(12) << setprecision(2) << value1
             << setw(12) << setprecision(3) << value2 << endl;

        outfile << setw(12) << setprecision(2) << value1
                << setw(12) << setprecision(3) << value2 << endl;
    }
}