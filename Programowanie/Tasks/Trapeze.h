#pragma once
#include <iostream>

class Trapeze
{
private:
    double sideA, sideB, sideC, sideD, heightH;
public:
    Trapeze(double a, double b, double c, double d, double h);
    void ShowInfo();
    double GetPerimeter();
    double GetArea();
};

