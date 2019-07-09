#ifndef COW_H
#define COW_H


class Cow
{
    public:
        Cow();
        Cow(const std::string & nm, const std::string & ho, double wt);
        Cow(const Cow &c);
        virtual ~Cow();
        Cow & operator=(const Cow & c);
        void ShowCow() const;

    protected:

    private:
        std::string m_name;
        std::string m_hobby;
        double m_weight;
};

#endif // COW_H
