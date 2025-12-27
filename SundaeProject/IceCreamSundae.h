#ifndef ICECREAMSUNDAE_H
#define ICECREAMSUNDAE_H
#include <string>
#include <vector>

using namespace std;
class IceCreamSundae
{
private:
    string flavor;
    vector<string> toppings;

public:
    IceCreamSundae(const string &flavor);
    void addTopping(const string &topping);
    string getFlavor() const;
    vector<string> getToppings() const;
    void printSundae() const;
};
#endif