#ifndef PLORG_H
#define PLORG_H
#include <iostream>


class Plorg
{
    public:
        Plorg(std::string imie = "Plorga", int wsp_sytosci = 50);
        virtual ~Plorg();
        void zmien_wsp_sytosci(int nowy_wsp);
        void przedstawienie();

    protected:

    private:
    std::string m_imie;
    int m_wsp_sytosci;
};

#endif // PLORG_H
