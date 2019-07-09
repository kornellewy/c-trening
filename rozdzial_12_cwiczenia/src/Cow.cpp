#include <iostream>
#include "Cow.h"
#define LOG(x) std::cout << x << std::endl

Cow::Cow()
{
    //ctor
}

Cow::Cow(const std::string & nm, const std::string & ho, double wt)
{
    // glebokie kopiowanie
    m_name= nm;
    m_hobby = ho;
    m_weight = wt;
}

// knstruktor kopiujacy
Cow::Cow(const Cow &c)
{
    //ctor
    std::string m_name( c.m_name );
    std::string m_hobby( c.m_hobby );
    m_weight = c.m_weight;
}

Cow::~Cow()
{
    //dtor
}

void Cow::ShowCow() const
{
    std::cout << m_name << std::endl;
    std::cout << m_hobby << std::endl;
    std::cout << m_weight << std::endl;
}

Cow & Cow::operator=(const Cow & c)
{
    if(this == & c)
    {
        return *this;
    }
    m_name = c.m_name ;
    m_hobby = c.m_hobby;
    m_weight = c.m_weight;
    return *this;

}
