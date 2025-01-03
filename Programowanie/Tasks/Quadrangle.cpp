#include "Quadrangle.h"

double Quadrangle::GetPerimeter()
{
	return sideA + sideB + sideC + sideD;
}


double Quadrangle::GetArea()
{
	return -1;
}

void Quadrangle::ShowInfo()
{
	std::cout << "Informacja o obiekcie o nazwie " << name << ":\n";
	std::cout << "Bok A = " << sideA << "\n";
	std::cout << "Bok B = " << sideB << "\n";
	std::cout << "Bok C = " << sideC << "\n";
	std::cout << "Bok D = " << sideD << "\n";
	std::cout << "Obwód = " << GetPerimeter() << "\n";
	std::cout << "Pole = " << GetArea() << "\n";
}

Quadrangle::Quadrangle(double a, double b, double c, double d, std::string n)
{
	sideA = a;
	sideB = b;
	sideC = c;
	sideD = d;
	name = n;
}