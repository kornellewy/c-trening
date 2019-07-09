#include <iostream>
#include <ctype.h>
#define LOG(x) std::cout << x << std::endl;
#define GET(x) std::cin >> x ;

//zad 1
int zad1_number_of_use = 0;
void zad1(char* tab, int n = 0);
//zad 2
struct batonik
{
    std::string marka = "millennium munch";
    double waga = 2.85;
    int kalorie = 350;
};
void ustaw(batonik& stan, std::string* nazwa, double* waga, int* kalorie);
//zad 3
void zadanie3(std::string &str);
//zad 4
struct stringy
{
    char *str;
    int ct = 0;
};
void zadanie4();
void zad4_set(stringy& beany, char testing[]);
void zad4_show(char testing[]);
void zad4_show(char testing[], int n);
void zad4_show(std::string str);
//zad 5
template <typename T>
void zad5_max5(T tab[], int n);
// zad 6
template <typename Typ>
void zad6_array_sum(Typ tab[], int n);
template <typename Typ>
void zad6_array_sum(Typ *tab[], int n);

int main()
{
/*
    //zad 1
    char tab[] = "dupa_dupa";
    char* s = tab;
    zad1(s);
    zad1(s);
    zad1(s);
    zad1(s, 4);
    //zad 2
    batonik Batonik;
    ustaw(Batonik, &Batonik.marka, &Batonik.waga, &Batonik.kalorie);
    LOG(Batonik.marka);
    LOG(Batonik.waga);
    LOG(Batonik.kalorie);
    //zad 3
    std::string str;
    zadanie3(str);
    return 0;
    //zad 4 przeciazenie
    */
    stringy beany;
    char testing[] = "dupadupaujujujuj";
    zad4_set(beany, testing);
    zad4_show(testing);
    zad4_show(testing, 2);
    zad4_show("gotowe zad 4");
    //zad 5 szablony
    double double_tab[5] = {1.0, 4.0, 2.0, 7.0, 3.0};
    int int_tab[5] = {1, 4, 2, 9, 3};
    zad5_max5(double_tab, 5);
    zad5_max5(int_tab, 5);
    // zad 6 przeciazenie szablonow
    zad6_array_sum(double_tab, 5);
    zad6_array_sum(&double_tab, 5);
}

void zad1(char* tab, int n)
{
    if (n!=0)
    {
        zad1_number_of_use++;
        for (int i=0; i<zad1_number_of_use; i++)
        {
            LOG(tab);
        }
    }
    zad1_number_of_use++;
    LOG(tab);
}

void ustaw(batonik& stan, std::string* nazwa, double* waga, int* kalorie)
{
    // ustawaimamy nazwe
    LOG("podaj nazwe batona :");
    GET(*nazwa);
    // ustawiamy wage
    LOG("podaj wage batona :");
    GET(*waga);

    // ustawiamy kalorie
    LOG("podaj kalorie batona :");
    GET(*kalorie);
}

void zadanie3(std::string &str)
{
    LOG("zadanie 3");
    LOG("prosze podac zdanie :")
    GET(str);
    for (int i=0; i<str.length(); i++)
    {
        str[i] = putwchar(toupper(str[i]));
    }
    LOG(str);
}

void zad4_set(stringy& beany, char testing[])
{
    beany.str = testing;
    LOG(beany.str);
}

void zad4_show(char testing[])
{
    LOG(testing);
}

void zad4_show(std::string testing)
{
    LOG(testing);
}


void zad4_show(char testing[], int n)
{
    for (int i =0; i<n; i++)
    {
        LOG(testing);
    }
}

template <typename T>
void zad5_max5(T tab[], int n)
{
    T temp = tab[0];
    for (int i = 0; i<n; i++)
    {
        if (tab[i] > temp)
        {
            temp = tab[i];
        }
    }
    LOG(temp);
}

template <typename Typ>
void zad6_array_sum(Typ tab[], int n)
{
    Typ sum = tab[0];
    for (int i = 0; i<n; i++)
    {
        sum += tab[i];
    }
    LOG(sum);
}

template <typename T>
void zad6_array_sum(T *tab[], int n)
{}
