#include"EQtriangle.h"
#include<iostream>

Equilateral_triangle::Equilateral_triangle(int side_a, int angle_A)
	: a(side_a), A(angle_A) {}

std::string Equilateral_triangle::get_name() const {
	return "�������������� �����������";
}

void Equilateral_triangle::display_info() const {
	std::cout << get_name() << ":" << std::endl;
	std::cout << "�������: a=" << a << " b=" << a << " c=" << a << std::endl;
	std::cout << "����: A=" << A << " B=" << A << " C=" << A << std::endl;
}