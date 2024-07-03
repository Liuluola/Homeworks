#include "Rhombus1.h"
#include<iostream>

Rhombus::Rhombus(int side_a, int angle_A, int angle_B)
	: a(side_a), A(angle_A), B(angle_B) {}

std::string Rhombus::get_name() const {
	return "Ромб";
}

void Rhombus::display_info() const {
	std::cout << get_name() << ":" << std::endl;
	std::cout << "Стороны: a=" << a << " b=" << a << " c=" << a << " d=" << a << std::endl;
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << A << " D=" << B << std::endl;
}