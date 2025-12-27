#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    string title;
    int rating;
    vector<string> movieTitles;
    vector<int> movieRatings;
    const int NUM_MOVIES = 5;

    cout << "**** RATE THE MOVIES ****" << endl;

    for (int i = 0; i < NUM_MOVIES; i++)
    {
        cout << "Insert a movie title: ";
        getline(cin, title);
        movieTitles.push_back(title);
        cout << "Insert your rating for this film: ";
        cin >> rating;
        movieRatings.push_back(rating);
        cin.get();
    }

    cout << "\n\nRATINGS\n\n";
    for (int i = 0; i < NUM_MOVIES; i++)
    {
        cout << "You rated '" << movieTitles[i] << "' " << movieRatings[i] << "/10" << endl;
    }

    return 0;
}