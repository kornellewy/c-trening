#ifndef CLASSIC_H
#define CLASSIC_H
#define LOG(x) std::cout << x << std::endl

#include <Cd.h>


class Classic : public Cd
{
    public:
        Classic();
        Classic(char * track, char * s1, char * s2, int n, double x);
        virtual ~Classic();
        virtual void Report() const;

    protected:

    private:
        char m_main_track[100];
};

#endif // CLASSIC_H
