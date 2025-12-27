#include "IceCreamSundae.h"

int main()
{
    IceCreamSundae romanoffSundae("strawberry");

    romanoffSundae.addTopping("cream");
    romanoffSundae.addTopping("nuts");
    romanoffSundae.addTopping("black cherry");

    romanoffSundae.printSundae();
}