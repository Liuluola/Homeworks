#pragma once
#include <string>
#include "Quadrangle1.h"

class Parallelogram : public Quadrangle {
public:
	int a, b, A, B;

	Parallelogram(int side_a, int side_b, int angle_A, int angle_B);
	virtual ~Parallelogram() {}
	virtual std::string get_name() const;
	void display_info() const;

	Parallelogram() {};
};