#include "Rtriangle.h"
#include<iostream>

Right_triangle::Right_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C)
	: a(side_a), b(side_b), c(side_c), A(angle_A), B(angle_B), C(angle_C) {}

std::string Right_triangle::get_name() const {
	return "Прямоугольный треугольник";
}

void Right_triangle::display_info() const {
	std::cout << get_name() << ":" << std::endl;
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}