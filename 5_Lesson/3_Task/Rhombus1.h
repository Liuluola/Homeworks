#pragma once
#include <string>
#include "Parallelogram1.h"

class Rhombus : public Parallelogram {
public:
	int a, A, B;

	Rhombus(int side_a, int angle_A, int angle_B);
	virtual ~Rhombus() {}
	virtual std::string get_name() const;
	void display_info() const;

	Rhombus() {};
};