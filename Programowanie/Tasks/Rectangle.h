#pragma once
#include <iostream>

class Rectangle
{
protected:
	double sideA, sideB;
	std::string name;
public:

	Rectangle(double a, double b, std::string n);

	void ShowInfo();
	double GetPerimeter();
	double GetArea();
};
