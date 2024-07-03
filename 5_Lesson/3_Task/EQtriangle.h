#pragma once
#include <string>
#include "Triangle1.h"

class Equilateral_triangle : public Triangle {
public:
	int a, A;

	Equilateral_triangle(int side_a, int angle_A);
	virtual ~Equilateral_triangle() {}
	virtual std::string get_name() const;
	void display_info() const;
};