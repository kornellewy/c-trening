#ifndef VINTAGEPORT_H
#define VINTAGEPORT_H

#include <Port.h>


class VintagePort : public Port
{
    public:
        VintagePort();
        VintagePort(std::string nn, int y);
        VintagePort(std::string br, int b, std::string nn, int y) :  Port(br, br, 1) {m_nickname = nn;
                                                                                        m_year = y;}
        VintagePort(const VintagePort & vp);
        VintagePort & operator=(const VintagePort & v);
        virtual ~VintagePort();
        virtual void show() const;
        friend std::ostream & operator << (std::ostream & os, const VintagePort & vp);

    protected:

    private:
        std::string m_nickname;
        int m_year;
};

#endif // VINTAGEPORT_H
