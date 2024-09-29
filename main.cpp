#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];  // Helytelen: N_ELEMENTS név helyett NELEMENTS lett használva, ami nem létezik.
    std::cout << '1-100 ertekek duplazasa';
    for (int i = 0;)  // Helytelen: A for ciklusból hiányzik a feltétel és az inkrementálás.
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)  // Helytelen: A ciklus feltétele mindig hamis lesz, mert i kezdetben 0, így a ciklus nem fut le.
    {
        std::cout << "Ertek:";
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;

    for (int i = 0; i < N_ELEMENTS, i++)  // Helytelen: Vessző (,) helyett pontosvesszőt (;) kellene használni a for feltételében.
    {
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0; //memory leak, nincs torolve a b ponter
}
