#include "Triangle1.h"
#include<iostream>

Triangle::Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C)
	: a(side_a), b(side_b), c(side_c), A(angle_A), B(angle_B), C(angle_C) {}

std::string Triangle::get_name() const {
	return "Треугольник";
}

void Triangle::display_info() const {
	std::cout << get_name() << ":" << std::endl;
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}