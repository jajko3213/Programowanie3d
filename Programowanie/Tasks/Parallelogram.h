#pragma once
#include <iostream>
class Parallelogram
{
private:
	double sideA, sideB ,heightH;
public:
	Parallelogram(double a, double b, double h);

	void ShowInfo();

	double GetPerimeter();

	double GetArea();
};

