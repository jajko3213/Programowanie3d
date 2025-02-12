#include <iostream>

int main()
{
    int firstVar = 5;
    int secondVar = 9;
    std::cout << "firstVar = " << firstVar << "\n";
    std::cout << "Adres firstVar: " << (&firstVar) << "\n";
    std::cout << "secondVar = " << secondVar << "\n";
    std::cout << "Adres secondVar: " << (&secondVar) << "\n";
    int *ptr = &firstVar;
    std::cout << "ptr = " << ptr << "\n";
    std::cout << "*ptr = " << *ptr << "\n";
    *ptr = 99;
    std::cout << "firstVar = " << firstVar << "\n";

    bool thirdVar = true;

    bool *boolPtr = &thirdVar;

    int tab[3] = { 2, 98, 4 };
    std::cout << "tab[0] = " << tab[0] << "\n";
    std::cout << "tab[0] = " << *tab << "\n"; //*(tab + 0)
    std::cout << "tab[1] = " << tab[1] << "\n";
    std::cout << "tab[1] = " << *(tab + 1) << "\n";
    std::cout << "tab[2] = " << tab[2] << "\n";
    std::cout << "tab[2] = " << *(tab + 2) << "\n";

    for (int i = 0; i < 3; i++)
    {
        std::cout << i << ": " << tab[i] << "\n";
        std::cout << i << ": " << *(tab + i) << "\n";
    }

    ptr = new int;
    *ptr = 55;

    std::cout << "Adres na stercie: " << ptr << "\n";
    std::cout << "Wartoœæ zmiennej ptr, która jest na stercie: " << *ptr << "\n";
    delete ptr;
    ptr = NULL;              

    int count;
    std::cout << "Podaj rozmiar tablicy:\n";
    std::cin >> count;
    int *t = new int[count];

    /*
    *t = 45;
    *(t + 1) = 87;
    t[3] = 99;

    int* tt = new int[count * 2];
    for (int i = 0; i < count; i++)
    {
        tt[i] = t[i];
    }

    delete[] t;
    t = tt;
    count = count * 2;
    */
   
    /*
    std::cout << "Wprowadzone wartoœci to:\n";
    for (int i = 0; i < count; ++i) 
    {
        t[i] = i;
        std::cout << "t[" << i << "] = " << t[i] << std::endl;
    }

    delete[] t;
    */
}
