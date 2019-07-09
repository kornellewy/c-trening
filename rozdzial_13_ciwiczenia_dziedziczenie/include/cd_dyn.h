#ifndef CD_DYN_H
#define CD_DYN_H


class cd_dyn
{
    public:
        cd_dyn();
        cd_dyn(char * s1, char * s2, int n, double x);
        cd_dyn(const cd_dyn & d);
        virtual ~cd_dyn();
        virtual void Report() const;
        cd_dyn & operator=(const cd_dyn & d);

    protected:

    private:
        char * m_performers;
        char * m_label;
        int * m_selections;
        double * m_playtime;
};

#endif // CD_DYN_H
