#include "Parallelogram1.h"
#include<iostream>

Parallelogram::Parallelogram(int side_a, int side_b, int angle_A, int angle_B)
	: a(side_a), b(side_b), A(angle_A), B(angle_B) {}

std::string Parallelogram::get_name() const {
	return "��������������";
}

void Parallelogram::display_info() const {
	std::cout << get_name() << ":" << std::endl;
	std::cout << "�������: a=" << a << " b=" << b << " c=" << a << " d=" << b << std::endl;
	std::cout << "����: A=" << A << " B=" << B << " C=" << A << " D=" << B << std::endl;
}