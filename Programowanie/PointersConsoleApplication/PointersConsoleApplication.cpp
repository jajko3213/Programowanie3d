#include <iostream>

int main()
{
    int firstVar = 5;
    int secondVar = 9;
    std::cout << "firstVar = " << firstVar << "\n";
    std::cout << "Adres firstVar: " << (&firstVar) << "\n";
    std::cout << "secondVar = " << secondVar << "\n";
    std::cout << "Adres secondVar: " << (&secondVar) << "\n";
}