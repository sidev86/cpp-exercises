#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double billAmount;
    double tipPercentage;
    double tipAmount;
    double totalAmountWithTip;

    cout << fixed << setprecision(2);
    cout << "Please enter the bill amount: " << endl;
    cin >> billAmount;
    cout << "Please enter the tip percentage that you wanna leave for the service: " << endl;
    cin >> tipPercentage;

    tipAmount = (billAmount * tipPercentage) / 100;

    totalAmountWithTip = billAmount + tipAmount;

    cout << "The bill amount to pay is $" << billAmount << endl;
    cout << "You've decided to give a tip amount of $" << tipAmount << endl;
    cout << "The total to pay with tips included is $" << totalAmountWithTip << endl;

    return 0;
}