#pragma once
#include <string>

class Triangle {
public:
	int a, b, c, A, B, C;

	Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C);
	virtual ~Triangle() {}
	virtual std::string get_name() const;
	void display_info() const;

	Triangle() {};
};

