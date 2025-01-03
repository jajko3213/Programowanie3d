#pragma once
#include <iostream>
#include "Trapeze.h"

class Rhombus :public Trapeze
{
public:
	Rhombus(double a, double b, double c, double d, double h, std::string n);
	double GetArea();
};

