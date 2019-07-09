#include <iostream>
#define LOG(x) std::cout << x << std::endl;
#define GET(x) std::cin >> x ;
//zad1
#include "kjn_bank.h"
//zad5
#include "kjn_sklep.h"
//zad6
#include "Move.h"
//zad7
#include "Plorg.h"

int main()
{
    //zad1
    /*
    //nie dynamicznie
    kjn_bank pan_pawel = kjn_bank("pan pawel", "1234", 1000);
    pan_pawel.print_data();
    pan_pawel.money_in(500);
    pan_pawel.money_out(2000);
    pan_pawel.money_out(1000);

    //dynamicznie
    kjn_bank* pan_pawel = new kjn_bank("pan pawel", "1234", 1000);
    pan_pawel->print_data();
    pan_pawel->money_in(500);
    pan_pawel->money_out(2000);
    pan_pawel->money_out(1000);
    delete pan_pawel;

    //zad5
    costomer pan_janusz = {"pan_janusz", 100.0};
    kjn_sklep biedronka;
    biedronka.push(pan_janusz);
    biedronka.pop(pan_janusz);
    LOG("Saldo sklepu:");
    LOG(biedronka.saldo_sklepu);

    //zad6
    Move kjn1 = Move(3.0,5.0);
    Move kjn2 = Move(55.0,34.0);
    kjn1.showmove();
    kjn2.showmove();
    kjn1.move_add(kjn2);
    kjn1.showmove();
    */
    //zad7
    // konstruktory
    Plorg kjn;
    Plorg kjn1 = Plorg("jan", 76);
    //przedstawinie
    kjn.przedstawienie();
    //zmianna wsp
    kjn.Plorg::zmien_wsp_sytosci(76);
    kjn.przedstawienie();
    return 0;
}

