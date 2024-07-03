#include <iostream>
#include <string>
#include "Triangle1.h"
#include "Rtriangle.h"
#include "IStriangle.h"
#include "EQtriangle.h"
#include "Quadrangle1.h"
#include "Parallelogram1.h"
#include "Rectangle1.h"
#include "Rhombus1.h"
#include "Square1.h"

int main()
{
	setlocale(LC_ALL, "rus");

	Triangle triangle(10, 20, 30, 50, 60, 70);
	Right_triangle right_triangle(10, 20, 30, 50, 60, 90);
	Isosceles_triangle isosceles_triangle(10, 20, 50, 60);
	Equilateral_triangle equilateral_triangle(30, 60);

	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	Parallelogram parallelogram(20, 30, 30, 40);
	Rectangle rectangle(10, 20);
	Rhombus rhombus(30, 30, 40);
	Square square(20);

	triangle.display_info();
	std::cout << std::endl;

	right_triangle.display_info();
	std::cout << std::endl;

	isosceles_triangle.display_info();
	std::cout << std::endl;

	equilateral_triangle.display_info();
	std::cout << std::endl;


	quadrangle.display_info();
	std::cout << std::endl;

	parallelogram.display_info();
	std::cout << std::endl;

	rectangle.display_info();
	std::cout << std::endl;

	rhombus.display_info();
	std::cout << std::endl;

	square.display_info();
	std::cout << std::endl;

	return 0;
}
