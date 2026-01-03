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
    int votes = 0;

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

    cout << "\nMOVIE GENRES PREFERENCES" << endl;
    cout << "---------------------------------------------" << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << setw(16) << left << "Genre" << right << setw(12) << "Count" << setw(10) << "\tPercentage" << endl;
    cout << "---------------------------------------------" << endl;
    for (auto const &pair : genreCounts)
    {
        double percentage = (static_cast<double>(pair.second) / votes) * 100.0;
        cout << setw(16) << left << pair.first << right << setw(10) << pair.second << "\t" << percentage << "%" << endl;
    }
    cout << "---------------------------------------------" << endl;
    cout << "\nTotal votes: " << votes << "\n"
         << endl;
    infile.close();
}