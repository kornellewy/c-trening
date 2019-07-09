#include "Complex_kjn.h"
#include <iostream>

Complex_kjn::Complex_kjn(double rzeczywista, double urojona)
{
    //ctor
    m_rzeczywista = rzeczywista;
    m_urojona = urojona;
}

Complex_kjn::~Complex_kjn()
{
    //dtor
}

void Complex_kjn::log()
{
    std::cout << m_rzeczywista << ", " << m_urojona << "i" <<std::endl;
}

//przeciazenie dodawania
Complex_kjn Complex_kjn::operator+(const Complex_kjn & liczba) const
{
    return Complex_kjn(m_rzeczywista + liczba.m_rzeczywista, m_urojona + liczba.m_urojona);
}
//przeciazenie odejmowania
Complex_kjn Complex_kjn::operator-(const Complex_kjn & liczba) const
{
    return Complex_kjn(m_rzeczywista - liczba.m_rzeczywista, m_urojona - liczba.m_urojona);
}
//przeciazenie mnożenia
Complex_kjn Complex_kjn::operator*(const Complex_kjn & liczba) const
{
    return Complex_kjn(m_rzeczywista * liczba.m_rzeczywista, m_urojona * liczba.m_urojona);
}
//mnozennie przez liczbe rzeczywista
Complex_kjn Complex_kjn::operator*(double liczba) const
{
    return Complex_kjn(m_rzeczywista * liczba, m_urojona * liczba);
}
//sprzeżenie (czyli to samo z minusem przy urojonej)
Complex_kjn Complex_kjn::operator~() const
{
    return Complex_kjn(m_rzeczywista , m_urojona * (-1.0));
}
