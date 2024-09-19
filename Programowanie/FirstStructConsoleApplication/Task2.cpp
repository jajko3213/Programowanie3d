#include <iostream>

//Napisz program, który pobierze wspó³rzêdne 2D i obliczy jak daleko jest ten punkt od œrodka uk³adu wspó³rzêdnych

struct point
{
	double x;
	double y;
};

void getCoordinate(double& x, double& y)
{
	std::cout << "Podaj wspó³rzêdn¹ x:\n";
	std::cin >> x;

	std::cout << "Podaj wspó³rzêdn¹ y:\n";
	std::cin >> y;
}

void task1()
{
	point firstPoint;
	firstPoint.x = 5;
	firstPoint.y = 5;

	getCoordinate(x, y);

	double distance = sqrt(x * x + y * y);

	std::cout << "Odleg³oœæ od œrodka to: " << distance;
}