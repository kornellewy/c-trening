#include "Plorg.h"
#define LOG(x) std::cout << x << std::endl;
#define GET(x) std::cin >> x ;
#include <iostream>

Plorg::Plorg(std::string imie, int wsp_sytosci)
{
    //ctor
    if (imie.length()<20)
    {
        m_imie = imie;
        m_wsp_sytosci = wsp_sytosci;
    }
    else
    {
        LOG("imie za dlugie")
        m_imie = imie;
        m_wsp_sytosci = wsp_sytosci;
    }
}

Plorg::~Plorg()
{
    //dtor
}

void Plorg::zmien_wsp_sytosci(int nowy_wsp)
{
    m_wsp_sytosci = nowy_wsp;
}

void Plorg::przedstawienie()
{
    LOG("Witam, jestem: ");
    LOG(m_imie);
    LOG("i jest mi bardzo miło mi cie poznać.");
    LOG("Mój współczynik sytości wynosi: ");
    LOG(m_wsp_sytosci);
    LOG(", ale nadal jestem bardzo głodny.")
}
