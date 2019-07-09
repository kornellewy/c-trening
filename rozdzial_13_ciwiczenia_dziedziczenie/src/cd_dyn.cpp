#include "cd_dyn.h"
#include <iostream>
#include <cstring>
#define LOG(x) std::cout << x << std::endl

cd_dyn::cd_dyn()
{
    //ctor
}

cd_dyn::~cd_dyn()
{
    delete [] m_performers, m_label;
    delete m_selections, m_playtime;
}

cd_dyn::cd_dyn(char * s1, char * s2, int n, double x)
{
    m_performers = new char[std::strlen(s1)+1];
    std::strcpy(m_performers, s1);
    m_label = new char[std::strlen(s2)+1];
    std::strcpy(m_label, s2);
    m_selections = new int;
    *m_selections = n;
    m_playtime = new double;
    *m_playtime = x;
}

void cd_dyn::Report() const
{
    LOG(*m_performers);
    LOG(*m_label);
    LOG(*m_selections);
    LOG(*m_playtime);
}

