#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int value;
    ifstream infile("input.txt");
    ofstream outfile("doubles.txt");

    if (!infile)
    {
        cerr << "Could not open file for reading" << endl;
        return 1;
    }

    if (!outfile)
    {
        cerr << "Could not open file for writing" << endl;
        return 1;
    }

    while (infile >> value)
    {
        outfile << value * 2 << endl;
    }

    infile.close();
    outfile.close();

    cout << "Writing doubled values on file completed" << endl;

    return 0;
}