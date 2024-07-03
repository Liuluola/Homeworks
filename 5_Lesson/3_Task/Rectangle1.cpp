#include "Rectangle1.h"
#include<iostream>

Rectangle::Rectangle(int side_a, int side_b)
	: a(side_a), b(side_b) {}

std::string Rectangle::get_name() const {
	return "Прямоугольник";
}

void Rectangle::display_info() const {
	std::cout << get_name() << ":" << std::endl;
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << a << " d=" << b << std::endl;
	std::cout << "Углы: A=" << 90 << " B=" << 90 << " C=" << 90 << " D=" << 90 << std::endl;
}