#include "Move.h"
#include <iostream>
#define LOG(x) std::cout << x << std::endl;
#define GET(x) std::cin >> x ;

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

Move::~Move()
{
    //dtor
}

void Move::showmove() const
{
    LOG("x:");
    LOG(x);
    LOG("y:");
    LOG(y);
}

const Move & Move::move_add(const Move & m)
{
    x += m.x;
    y += m.y;
    return *this;
}
