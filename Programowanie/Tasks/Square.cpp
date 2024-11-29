#include "Square.h"

Square::Square(double a)
{
	sideA = a;
}

void Square::ShowInfo()
{
	std::cout << "Informacje o kwadracie:\n";
	std::cout << "Bok A = " << sideA << "\n";
	std::cout << "Obwód = " << GetPerimeter() << "\n";
	std::cout << "Pole = " << GetArea() << "\n";
}

double Square::GetPerimeter()
{
	return 4 * sideA;
}

double Square::GetArea()
{
	return sideA * sideA;
}
