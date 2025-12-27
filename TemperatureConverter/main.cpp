#include <iostream>
#include <array>

using namespace std;
int main()
{
    array<double, 7> temperatures;

    for (int i = 0; i < temperatures.size(); i++)
    {
        cout << "Insert temperature for day " << i + 1 << ": ";
        cin >> temperatures[i];
    }

    cout << "\n\nThese are the temperatures inserted with relative conversions in Celsius\n\n";
    for (auto fahrTemperature : temperatures)
    {
        cout << fahrTemperature << "F\t=>\t";
        double celsiusTemperature = (fahrTemperature - 32) * 5 / 9;
        cout << celsiusTemperature << "C°" << endl;
    }
    return 0;
}