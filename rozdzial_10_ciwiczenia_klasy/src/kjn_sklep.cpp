#include "kjn_sklep.h"
#define LOG(x) std::cout << x << std::endl;
#define GET(x) std::cin >> x ;

kjn_sklep::kjn_sklep()
{
    //ctor
}

kjn_sklep::~kjn_sklep()
{
    //dtor
}

bool kjn_sklep::isempty() const
{
    if (top == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


bool kjn_sklep::isfull() const
{
    if (top == MAX)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool kjn_sklep::push(const Item & item)
{
    if (top < MAX)
    {
        top = top +1;
        items[top] = item;
        LOG("dodano klijeta");
        return true;
    }
    else
    {
        return false;
    }
}

bool kjn_sklep::pop(Item & item)
{
    if (top > 0)
    {
        saldo_sklepu += items[top].payment;
        top = top - 1;
        item = items[top];
        LOG("usunieto klijeta");
        return true;
    }
    else
    {
        return false;
    }
}
