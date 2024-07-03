#pragma once
#include <string>
#include "Parallelogram1.h"

class Rectangle : public Parallelogram {
public:
	int a, b;

	Rectangle(int side_a, int side_b);
	virtual ~Rectangle() {}
	virtual std::string get_name() const;
	void display_info() const;
};