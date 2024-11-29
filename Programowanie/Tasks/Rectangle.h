#pragma once
#include <iostream>

class Rectangle
{
private:
	double sideA, sideB;
protected:

public:

	Rectangle(double a, double b);

	void ShowInfo();
	double GetPerimeter();
	double GetArea();
};
