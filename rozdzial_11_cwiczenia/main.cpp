#include <iostream>
#define LOG(x) std::cout << x << std::endl;
#define GET(x) std::cin >> x ;
//zad1
#include "vect.h"
#include <fstream>
void zad1();
//zad7
#include "Complex_kjn.h"

using namespace std;

int main()
{
    /*
    //zad1
    zad1();
    */
    //zad7
    // inicjacja
    Complex_kjn kjn1(1.2, 3.5);
    Complex_kjn kjn2(3.2, 6.4);
    //dodawanie
    kjn1 = kjn1 + kjn2;
    //log zawartosci
    kjn1.log();
    //odejmowanie
    kjn1 = kjn1 - kjn2;
    kjn1.log();
    //mnożenie
    kjn1 = kjn1 * kjn2;
    kjn1.log();
    //mnożenie przez liczbe
    kjn1 = kjn1 * 2.1;
    kjn1.log();
    //sprzerzenie
    kjn1 = ~kjn1;
    kjn1.log();
    return 0;
}

void zad1()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));   // inicjalizacja generatora liczb pseudolosowych
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;

    fstream myfile;
    myfile.open ("example.txt");
    myfile << "zaczynamy zapisywanie.\n";


    cout << "Podaj dystans do przejścia (k, aby zakończyć): ";
    while (cin >> target)
    {
        myfile << "dystans do przejścia : " << target <<"\n";

        cout << "Podaj długość kroku: ";
        if (!(cin >> dstep))
            break;

        myfile << "dlugosc kroku: " << dstep <<"\n";

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;

            myfile << "krok: " << steps << " x,y = " << result.xval() << ", " << result.yval() << "\n";

            steps++;
        }
        cout << "Po " << steps << " krokach delikwent "
            "osiągnął położenie:\n";
        cout << result << endl;

        myfile << "Po " << steps << " krokach delikwent "
            "osiągnął położenie:\n";
        myfile << result << endl;

        result.polar_mode();
        cout << " czyli\n" << result << endl;
        cout << "Średnia długość kroku pozornego = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Podaj dystans do przejścia (k, aby zakończyć): ";
    }
    cout << "Koniec!\n";
    myfile.close();
    cin.clear();
    while (cin.get() != '\n')
    {
        continue;
    }
}
