#ifndef CD_H
#define CD_H
#include <iostream>


class Cd
{
    public:
        Cd();
        Cd(char * s1, char * s2, int n, double x);
        Cd(const Cd & d);
        virtual ~Cd();
        virtual void Report() const;
        Cd & operator=(const Cd & d);

    protected:

    private:
        char m_performers[50];
        char m_label[20];
        int m_selections;
        double m_playtime;
};

#endif // CD_H
