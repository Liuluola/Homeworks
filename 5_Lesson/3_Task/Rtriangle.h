#pragma once
#include <string>
#include "Triangle1.h"

class Right_triangle : public Triangle {
public:
	int a, b, c, A, B, C;

	Right_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C);
	virtual ~Right_triangle() {}
	virtual std::string get_name() const;
	void display_info() const;
};