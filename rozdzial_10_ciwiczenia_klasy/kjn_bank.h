#include <iostream>

#define LOG(x) std::cout << x << std::endl;
#define GET(x) std::cin >> x ;

#ifndef KJN_BANK_H
#define KJN_BANK_H


class kjn_bank
{

    public:
        kjn_bank(std::string imie_nazwisko = "jan kowalski", std::string nr_rachunku = "1234", int saldo_rachunku = 0);
        ~kjn_bank();
        void print_data();
        void money_out(int money);
        void money_in(int money);

    protected:

    private:
        std::string m_imie_nazwisko;
        std::string m_nr_rachunku;
        int m_saldo_rachunku;
};

#endif // KJN_BANK_H
