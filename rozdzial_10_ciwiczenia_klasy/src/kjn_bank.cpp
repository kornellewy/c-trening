#include <iostream>

#define LOG(x) std::cout << x << std::endl;
#define GET(x) std::cin >> x ;

#include "kjn_bank.h"

kjn_bank::kjn_bank(std::string imie_nazwisko, std::string nr_rachunku, int saldo_rachunku)
{
    m_imie_nazwisko = imie_nazwisko;
    m_nr_rachunku = nr_rachunku;
    m_saldo_rachunku = saldo_rachunku;
}

kjn_bank::~kjn_bank()
{
    LOG("obiekt o nazwie:");
    LOG(m_imie_nazwisko);
    LOG("został ununoiety");


}

void kjn_bank::print_data()
{
    LOG(m_imie_nazwisko);
    LOG(m_nr_rachunku);
    LOG(m_saldo_rachunku);
}

void kjn_bank::money_out(int money)
{
    if (m_saldo_rachunku > money)
    {
        m_saldo_rachunku -= money;
        LOG("odjeto od rachunku pieniadze w wysokosci :");
        LOG(money);
        LOG("Na koncie pozostało:")
        LOG(m_saldo_rachunku);
        LOG("Moj panie.");
    }
    else
    {
        LOG("za malo pieniedzy moj panie");
    }
}

void kjn_bank::money_in(int money)
{
    m_saldo_rachunku += money;
    LOG("dodano od rachunku pieniadze w wysokosci :");
    LOG(money);
    LOG("Na koncie jest:")
    LOG(m_saldo_rachunku);
    LOG("Moj panie.");
}
