#ifndef KJN_SKLEP_H
#define KJN_SKLEP_H
#include <iostream>

struct costomer
{
    std::string fullname;
    double payment;
};

typedef struct costomer Item;

class kjn_sklep
{
    private:
        enum { MAX = 10 };
        Item items[MAX];
        int top;

    public:
        kjn_sklep();
        virtual ~kjn_sklep();
        bool isfull() const;
        bool isempty() const;
        bool push(const Item & item);
        bool pop(Item & item);
        double saldo_sklepu = 0;

    protected:


};

#endif // KJN_SKLEP_H
