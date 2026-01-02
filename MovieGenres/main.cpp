#include <fstream>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, int> genreCounts;
    ifstream infile("genres.txt");
    string genre;
    double votes = 0;

    if (!infile)
    {
        cerr << "Could not open file for reading" << endl;
        return 1;
    }

    while (infile >> genre)
    {
        genreCounts[genre]++;
        votes++;
    }

    cout << votes << endl;

    cout << "\nMOVIE GENRES VOTES" << endl;
    cout << "-------------------------" << endl;
    cout << fixed << showpoint << setprecision(2);
    for (auto const &pair : genreCounts)
    {
        int percentage = (pair.second / votes) * 100;
        cout << setw(16) << left << pair.first << percentage << "%" << endl;
    }
    infile.close();
}