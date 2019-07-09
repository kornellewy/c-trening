#ifndef PORT_H
#define PORT_H
#include <iostream>
#define LOG(x) std::cout << x << std::endl


class Port
{
    public:

        Port(std::string br = "brak", std::string st = "brak",int b = 1);
        Port(const Port & p);
        virtual ~Port();
        Port & operator=(const Port & p);
        Port & operator+=(int b);
        Port & operator-=(int b);
        int BottleCount() const { return m_buttles; }
        virtual void show() const;
        friend std::ostream & operator << (std::ostream & os, const Port & p);

    protected:

    private:
        std::string m_brand;
        std::string m_style;
        int m_buttles;

};

#endif // PORT_H
