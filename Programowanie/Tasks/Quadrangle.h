#pragma once
#include <iostream>

class Quadrangle
{
protected:
	double sideA, sideB, sideC, sideD;
	std::string name;
public:

	Quadrangle(double a, double b, double c, double d, std::string n);
	void ShowInfo();
	virtual double GetArea() = 0;
	double GetPerimeter();
};
