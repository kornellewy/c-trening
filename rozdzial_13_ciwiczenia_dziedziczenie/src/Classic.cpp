#include "Classic.h"
#include <cstring>

Classic::Classic()
{
    //ctor
}

Classic::Classic(char * track, char * s1, char * s2, int n, double x)
    : Cd( s1, s2, n, x)
{
    strcpy(this->m_main_track, track);
}

Classic::~Classic()
{
    //dtor
}

void Classic::Report() const
{
    LOG(m_main_track);
}

