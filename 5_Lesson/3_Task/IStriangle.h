#pragma once
#include <string>
#include "Triangle1.h"

class Isosceles_triangle : public Triangle {
public:
	int a, b, A, B;

	Isosceles_triangle(int side_a, int side_b, int angle_A, int angle_B);
	virtual ~Isosceles_triangle() {}
	virtual std::string get_name() const;
	void display_info() const;
};