#include "Square1.h"
#include<iostream>

Square::Square(int side_a)
	: a(side_a){}

std::string Square::get_name() const {
	return "�������";
}

void Square::display_info() const {
	std::cout << get_name() << ":" << std::endl;
	std::cout << "�������: a=" << a << " b=" << a << " c=" << a << " d=" << a << std::endl;
	std::cout << "����: A=" << 90 << " B=" << 90 << " C=" << 90 << " D=" << 90 << std::endl;
}