#include <iostream>
#include <string>

using namespace std;
int main()
{
    string package;
    int streamDevices;

    int monthlySubscription;
    string plan;
    int maxDevicesOnPlan;
    int extraDeviceTax;

    cout << "**** SK8MEDIA SUBSCRIPTION PLAN ****" << endl;

    // input da utente per piano scelto (A, B, C)
    cout << "Please select the package that you prefer: " << endl;
    cin >> package;

    // input utente numero di dispositivi simultanei
    cout << "Select the number of simultaneous devices that you would like for streaming: " << endl;
    cin >> streamDevices;

    // calcolo totale sulla base del piano
    // imposto la tariffa mensile in base al piano scelto
    // imposto il numero di dispositivi massimi che rientrano in tariffa
    // imposto tariffa per ogni dispositivo extra
    if (package == "A")
    {
        plan = "Basic";
        monthlySubscription = 9;
        maxDevicesOnPlan = 1;
        extraDeviceTax = 6;
    }
    else if (package == "B")
    {
        plan = "Standard";
        monthlySubscription = 14;
        maxDevicesOnPlan = 3;
        extraDeviceTax = 4;
    }
    else if (package == "C")
    {
        plan = "Premium";
        monthlySubscription = 20;
        maxDevicesOnPlan = 5;
        extraDeviceTax = 2;
    }

    cout << "Plan " << plan << "(Package " << package << ")" << endl;
    cout << "Monthly Subscription => $" << monthlySubscription << endl;
    cout << "Max simultaneous devices on plan => " << maxDevicesOnPlan << endl;
    cout << "Price for additional device => " << extraDeviceTax << endl;
    cout << "---------------------------------" << endl;

    cout << "You've requested the stream service for " << streamDevices << " devices." << endl;
    int extraDevices = streamDevices - maxDevicesOnPlan;
    int extraPrice = 0;

    if (extraDevices > 0)
    {
        extraPrice = extraDevices * extraDeviceTax;
        cout << "Extra price applied for " << extraDevices << " devices ($" << extraPrice << ")" << endl;
    }
    int totalPlanPrice = monthlySubscription + extraPrice;
    cout << "TOTAL PRICE FOR THIS PLAN: $" << totalPlanPrice << endl;

    // totale = costo mensile + tariffa aggiunta per numero di dispositivi in più
    // rispetto al numero massimo di dispositivi consentiti

    return 0;
}