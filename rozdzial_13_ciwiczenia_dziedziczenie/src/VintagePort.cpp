#include "VintagePort.h"

VintagePort::VintagePort()
{
    //ctor
}

VintagePort::VintagePort(std::string nn, int y)
{
    m_nickname = nn;
    m_year = y;
}

VintagePort::VintagePort(const VintagePort & v)
{
    this->m_nickname = v.m_nickname;
    this->m_year = v.m_year;
}

VintagePort & VintagePort::operator=(const VintagePort & v)
{
    if(this == & v)
    {
        return *this;
    }
    this->m_nickname = v.m_nickname;
    this->m_year = v.m_year;
    return *this;
}

VintagePort::~VintagePort()
{
    //dtor
}

void VintagePort::show() const
{
    Port::show();
    LOG(m_nickname);
    LOG(m_year);
}

std::ostream & operator << (std::ostream & os, const VintagePort & vp)
{
    os << vp.m_nickname << ", year: " << vp.m_year;
    return os;
}
