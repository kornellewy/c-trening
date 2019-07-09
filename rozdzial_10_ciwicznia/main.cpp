#include <iostream>
#include <new>
#define LOG(x) std::cout << x << std::endl;
//zad2
void zadanie_2();
//zad3
struct chaff
{
    char dross[20];
    int slag;
};
void zadanie_3();

int main()
{
    zadanie_2();struct new c
    zadanie_3();
    return 0;
}

void zadanie_2()
{
    LOG("kjn");
    using namespace std;
    string input;
    cout << "Wprowadź wiersz:\n";
    cin >> input;
    while(input != "#")
    {
        cout << input.size() << endl;
        cin >> input;
    }
    cout << "Koniec\n";
}

void zadanie_3()
{
    chaff *tab[1];
    tab[0] = new chaff;
    tab[1] = new chaff;
    // i dalej cin do nich
}
