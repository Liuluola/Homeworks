#include"IStriangle.h"
#include<iostream>

Isosceles_triangle::Isosceles_triangle(int side_a, int side_b, int angle_A, int angle_B)
	: a(side_a), b(side_b), A(angle_A), B(angle_B) {}

std::string Isosceles_triangle::get_name() const {
	return "�������������� �����������";
}

void Isosceles_triangle::display_info() const {
	std::cout << get_name() << ":" << std::endl;
	std::cout << "�������: a=" << a << " b=" << b << " c=" << a << std::endl;
	std::cout << "����: A=" << A << " B=" << B << " C=" << A << std::endl;
}