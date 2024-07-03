#pragma once
#include <string>
#include "Rhombus1.h"

class Square : public Rhombus {
public:
	int a;

	Square(int side_a);
	virtual ~Square() {}
	virtual std::string get_name() const;
	void display_info() const;
};