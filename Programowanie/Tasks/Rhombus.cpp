#include "Rhombus.h"

Rhombus::Rhombus(double a, double b, double c, double d, double h, std::string n) : Trapeze(a, b, c, d, h, n)
{
}

double Rhombus::GetArea()
{
	return sideA * height;
}