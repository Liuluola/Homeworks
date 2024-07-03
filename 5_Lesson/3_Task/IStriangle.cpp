#include"IStriangle.h"
#include<iostream>

Isosceles_triangle::Isosceles_triangle(int side_a, int side_b, int angle_A, int angle_B)
	: a(side_a), b(side_b), A(angle_A), B(angle_B) {}

std::string Isosceles_triangle::get_name() const {
	return "Равнобедренный треугольник";
}

void Isosceles_triangle::display_info() const {
	std::cout << get_name() << ":" << std::endl;
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << a << std::endl;
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << A << std::endl;
}