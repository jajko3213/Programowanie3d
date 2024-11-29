#pragma once
#include <iostream>
class Rhombus
{
private:
	double diagonalA, diagonalB, sideA;
public:
	Rhombus(double da, double db, double a);
	void ShowInfo();
	double GetPerimeter();
	double GetArea();
};

