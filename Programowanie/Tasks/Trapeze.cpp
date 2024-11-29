#include "Trapeze.h"

Trapeze::Trapeze(double a, double b, double c, double d, double h)
{
    sideA = a;
    sideB = b;
    sideC = c;
    sideD = d;
    heightH = h;
}

void Trapeze::ShowInfo()
{
    std::cout << "Informacje o trapezie:\n";
    std::cout << "Bok A = " << sideA << "\n";
    std::cout << "Bok B = " << sideB << "\n";
    std::cout << "Bok C = " << sideC << "\n";
    std::cout << "Bok D = " << sideD << "\n";
    std::cout << "Wysokoœæ h = " << heightH << "\n";
    std::cout << "Obwód = " << GetPerimeter() << "\n";
    std::cout << "Pole = " << GetArea() << "\n";
}

double Trapeze::GetPerimeter()
{
    return sideA + sideB + sideC + sideD;
}

double Trapeze::GetArea()
{
    return ((sideA + sideB) * heightH) / 2;
}