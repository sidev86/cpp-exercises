#include <iostream>

using namespace std;

// double getBigger(double a, double b);
// int getBigger(int a, int b);
// string getBigger(string a, string b);

template <class T>
T getBigger(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    double biggerDub = getBigger(3.14, 5.8);
    int biggerInt = getBigger(11, 5);
    string biggerStr = getBigger("John", "Summer");

    cout << "Bigger Items: " << endl;
    cout << "\t" << biggerDub << "\n\t" << biggerInt << "\n\t" << biggerStr << endl;
    return 0;
}

// double getBigger(double a, double b)
// {
//     return (a > b) ? a : b;
// }
// int getBigger(int a, int b)
// {
//     return (a > b) ? a : b;
// }
// string getBigger(string a, string b)
// {
//     return (a > b) ? a : b;
// }