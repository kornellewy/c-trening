#include <iostream>
#include <cstring>
#include "Cd.h"
#include "Classic.h"
#include "cd_dyn.h"
#include "Port.h"
#include "VintagePort.h"
#define LOG(x) std::cout << x << std::endl

void Bravo(const Cd & disk);

int main()
{
    // zad1
    /*
    Cd c1("1", "1", 100, 20.5);
    Classic c2 = Classic("dupa", "2", "2", 212, 2.4);

    Cd * pcd = &c1;
    c1.Report();
    c2.Report();

    pcd->Report();
    pcd = &c2;
    c2.Report();

    Bravo(c1);
    Bravo(c2);

    Classic ccopy;
    ccopy = c2;
    ccopy.Report();
    */
    // zad2
    /*
    cd_dyn c1("1", "1", 100, 20.5);
    c1.Report();
    */
    //zad4
    // Port
    /*
    std::string nazwa = "amarena";
    std::string styl = "jebitnie siarkowo wisniowa";
    int ilost_butelek = 999;
    Port b1(nazwa, styl, ilost_butelek);
    Port b2;
    LOG("b1:");
    b1.show();
    LOG("");
    LOG("b2 = b1:");
    b2 = b1;
    b2.show();
    LOG("");
    LOG("b2-=10:");
    b2 -= 10;
    b2.show();
    LOG("");
    LOG("std::cout << b2 <<std::endl:");
    std::cout << b2 <<std::endl;
    */
    // VinatagePort
    std::string nazwa = "amarena";
    LOG("");
    LOG("VinatagePort:");
    int ilosc = 100;
    std::string nick = "jebacz";
    int rok = 2020;
    VintagePort v1(nazwa, ilosc, nick, rok);
    LOG("");
    LOG("v1:");
    v1.show();

    return 0;
}

void Bravo(const Cd & disk)
{
    disk.Report();
}
