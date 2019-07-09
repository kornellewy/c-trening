#include "Port.h"


Port::Port(std::string br, std::string st, int b)
{
    m_brand = br;
    m_style = st;
    m_buttles = b;
}

Port::Port(const Port & p)
{
    this->m_brand = p.m_brand;
    this->m_style = p.m_style;
    m_buttles = p.m_buttles;
}

Port::~Port()
{
    //dtor
}

void Port::show() const
{
    LOG(m_brand);
    LOG(m_style);
    LOG(m_buttles);
}

Port & Port::operator=(const Port & p)
{
    if(this == & p)
    {
        return *this;
    }
    m_brand = p.m_brand;
    m_style = p.m_style;
    m_buttles = p.m_buttles;
    return *this;
}

Port & Port::operator+=(int b)
{
    if(b = 0)
    {
        return *this;
    }
    m_buttles = m_buttles + b;
    return *this;
}

Port & Port::operator-=(int b)
{
    if(b = 0)
    {
        return *this;
    }
    this->m_buttles = this->m_buttles-b;
    return *this;
}

std::ostream & operator << (std::ostream & os, const Port & p)
{
    os << p.m_brand << ", styl: " << p.m_style <<", ilosc: "<<p.m_buttles;
    return os;
}
