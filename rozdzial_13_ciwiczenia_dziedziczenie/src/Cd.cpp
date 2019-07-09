#include "Cd.h"
#include <iostream>
#include <cstring>
#define LOG(x) std::cout << x << std::endl

Cd::Cd()
{
    //ctor
}

Cd::Cd(char * s1, char * s2, int n, double x)
{
    strcpy(this->m_performers, s1);
    strcpy(this->m_label, s2);
    m_selections = n;
    m_playtime = x;
}

Cd::Cd(const Cd & d)
{
    strcpy(this->m_performers,  d.m_performers);
    strcpy(this->m_label,  d.m_label);
    m_selections = d.m_selections;
    m_playtime = d.m_playtime;
}

void Cd::Report() const
{
    LOG(m_performers);
    LOG(m_label);
    LOG(m_selections);
    LOG(m_playtime);
}

Cd::~Cd()
{
    //dtor
}

Cd & Cd::operator=(const Cd & d)
{
    if(this == & d)
    {
        return *this;
    }
    strcpy(m_performers, d.m_performers);
    strcpy(m_label, d.m_label);
    m_selections = d.m_selections;
    m_playtime = d.m_playtime;
    return *this;
}
