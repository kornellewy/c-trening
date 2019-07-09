#include <iostream>

//cw1
double cw1_srednia_harmoniczna();

// cw3
struct podlo
{
    std::string producent;
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float objetosc;
};
void cw3_print_all(podlo x);
void cw3_print_all_pointer(podlo* x);

//cw5
void cw5();
int cw5_silnia(int x);

//cw7
double* fill_array(double ar[], int limit);
void show_array(double* ar_begin, double* ar_end);
void revalue(double r, double* ar_begin, double* ar_end);

//cw7
const int Max =3;
void cw7();

int main()
{
    //cw1 str 336
    cw1_srednia_harmoniczna();
    //cw3 str 336
    podlo x;
    x.producent = "dupa";
    x.wysokosc = 1;
    x.szerokosc = 1;
    x.dlugosc = 1;
    x.objetosc = 1;
    cw3_print_all(x);
    podlo* z = &x;
    cw3_print_all_pointer(z);
    //cw5 str 336
    cw5();
    //cw7 str 336
    cw7();

    return 0;
}

double cw1_srednia_harmoniczna()
{
    //srednia harmoniczna = 2*(x*y)/(x+y)
    int x, y;
    while(true)
    {
        std::cout << "dej x: ";
        std::cin >> x;
        std::cout << std::endl;
        std::cout << "dej y: ";
        std::cin >> y;
        std::cout << std::endl;
        std::cout << "srednia harmoniczna = ";
        std::cout << 2.0*(x*y)/(x+y) << std::endl;
        if (x == 0 || y==0)
        {
            break;
        }
        if (!std::cin)
        {
            break;
        }
    }
    return 2.0*(x*y)/(x+y);
}

void cw3_print_all(podlo x)
{
    std::cout <<std::endl;
    std::cout<< x.producent <<std::endl;
    std::cout<< x.wysokosc <<std::endl;
    std::cout<< x.szerokosc <<std::endl;
    std::cout<< x.dlugosc <<std::endl;
    std::cout<< x.objetosc <<std::endl;
}

void cw3_print_all_pointer(podlo* x)
{
    std::cout <<std::endl;
    std::cout<< x->producent <<std::endl;
    std::cout<< x->wysokosc <<std::endl;
    std::cout<< x->szerokosc <<std::endl;
    std::cout<< x->dlugosc <<std::endl;
    std::cout<< x->objetosc <<std::endl;
}

void cw5()
{
    int x, y;
    while(true)
    {
        std::cout << std::endl;
        std::cout << "dej x: ";
        std::cin >> x;
        if (x < 0)
        {
            break;
        }
        if (!std::cin)
        {
            break;
        }
        std::cout << std::endl;
        std::cout << "silnia x: " << cw5_silnia(x);
    }
}

int cw5_silnia(int x)
{
    if (x == 0)
    {
        return 0;
    }
    if (x == 1)
    {
        return 1;
    }
    return(x * cw5_silnia(x-1));
}

void cw7()
{
    using namespace std;
    double properties[Max];

    double* size = fill_array(properties, Max);
    show_array(&properties[0], size);
    if (size > 0)
    {
        cout << "Podaj czynnik zmiany wartoœci: ";
        double factor;
        while (!(cin >> factor)) // nieliczbowa wartoœæ na wejœciu
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Niepoprawna wartoœæ; podaj liczbê: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Gotowe.\n";
    cin.get();
    cin.get();
}

double* fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Podaj wartoœæ nr " << (i + 1) << ": ";
        cin >> temp;
        if (!cin)    // b³êdne dane
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "B³êdne dane, wprowadzanie danych przerwane.\n";
           break;
        }
        else if (temp < 0)     // nakaz zakoñczenia
            break;
        ar[i] = temp;
    }
    return &ar[limit];
}

void show_array(double* ar_begin, double* ar_end)
{
    using namespace std;
    double* pt;
    int i = 0;
    for (pt = ar_begin; pt != ar_end; pt++)
    {
        cout << "Nieruchomoœæ nr " << (i + 1) << ": ";
        cout << *pt << endl;
        i +=1;
    }
}

void revalue(double r, double* ar_begin, double* ar_end)
{
    double* pt;
    for (pt = ar_begin; pt != ar_end; pt++)
    {
        *pt *= r;
    }
}

