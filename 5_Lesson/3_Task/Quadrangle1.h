#pragma once
#include <string>

class Quadrangle {
public:
	int a, b, c, d, A, B, C, D;

	Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D);
	virtual ~Quadrangle() {}
	virtual std::string get_name() const;
	void display_info() const;

	Quadrangle() {};
};

