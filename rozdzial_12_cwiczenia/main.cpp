#include <iostream>
#include "Cow.h"

#define LOG(x) std::cout << x << std::endl

int main()
{
    // zad1
    std::string name = "kjn";
    std::string hobby = "wedkarstwo";
    double waga = 100.0;
    Cow krowa = Cow(name, hobby, waga);
    krowa.ShowCow();
    Cow krowa2 = Cow();
    krowa2.ShowCow();
    krowa2 = krowa;
    krowa2.ShowCow();
    // zad
    return 0;
}
