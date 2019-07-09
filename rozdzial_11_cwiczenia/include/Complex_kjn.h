#ifndef COMPLEX_KJN_H
#define COMPLEX_KJN_H


class Complex_kjn
{
    public:
        Complex_kjn(double rzeczywista = 0.0, double urojona = 0.0);
        virtual ~Complex_kjn();
        void log();
        Complex_kjn operator+(const Complex_kjn & liczba) const;
        Complex_kjn operator-(const Complex_kjn & liczba) const;
        Complex_kjn operator*(const Complex_kjn & liczba) const;
        Complex_kjn operator*(double liczba) const;
        Complex_kjn operator~() const;

    protected:

    private:
        double m_rzeczywista;
        double m_urojona;
};

#endif // COMPLEX_KJN_H
