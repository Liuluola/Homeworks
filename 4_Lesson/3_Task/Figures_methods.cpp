#include <iostream>
#include <string>
#include <cmath>

class Figure {
public:

	virtual void display_info() const {
		std::cout << "Фигура:" << std::endl;
		std::cout << "Правильная" << std::endl;
		std::cout << "Количество сторон: 0" << std::endl;
	}

	virtual bool check() const {
		return false;
	}
};

class Triangle : public Figure {
protected:
	int a, b, c; // Стороны
	int A, B, C; // Углы

public:
	Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C)
		: a(side_a), b(side_b), c(side_c), A(angle_A), B(angle_B), C(angle_C) {}

	virtual std::string get_name() const {
		return "Треугольник:";
	}

	void display_info() const override {
		std::cout << get_name() << ":" << std::endl;
		std::cout << (check() ? "Правильная" : "Неправильная") << std::endl;
		std::cout << "Количество сторон: 3" << std::endl;
		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;

	}

	bool check() const override {
		return A + B + C == 180;
	}
};

class RightTriangle : public Triangle {
public:
	RightTriangle(int side_a, int side_b, int side_c)
		: Triangle(side_a, side_b, side_c, 0, 0, 90) {}

	std::string get_name() const override {
		return "Прямоугольный треугольник";
	}

	void display_info() const override {
		Triangle::display_info();
	}

	bool check() const override {
		return Triangle::check() && C == 90;
	}
};

class IsoscelesTriangle : public Triangle {
public:
	IsoscelesTriangle(int side_a, int side_b, int angle_A, int angle_B)
		: Triangle(side_a, side_b, side_a, angle_A, angle_B, angle_A) {}

	std::string get_name() const override {
		return "Равнобедренный треугольник";
	}

	void display_info() const override {
		Triangle::display_info();
	}

	bool check() const override {
		return Triangle::check() && a == c && A == C;
	}
};

class EquilateralTriangle : public Triangle {
public:
	EquilateralTriangle(int side)
		: Triangle(side, side, side, 60, 60, 60) {}

	std::string get_name() const override {
		return "Равносторонний треугольник";
	}

	void display_info() const override {
		Triangle::display_info();
	}

	bool check() const override {
		return Triangle::check() && a == b && b == c && A == B && B == C && A == 60;
	}
};

class Quadrangle : public Figure {
protected:
	int a, b, c, d; // Стороны
	int A, B, C, D; // Углы

public:
	Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D)
		: a(side_a), b(side_b), c(side_c), d(side_d), A(angle_A), B(angle_B), C(angle_C), D(angle_D) {}

	virtual std::string get_name() const {
		return "Четырехугольник";
	}

	void display_info() const override {
		std::cout << get_name() << ":" << std::endl;
		std::cout << (check() ? "Правильная" : "Неправильная") << std::endl;
		std::cout << "Количество сторон: 4" << std::endl;
		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
	}

	bool check() const override {
		return A + B + C + D == 360;
	}
};

class Rectangle : public Quadrangle {
public:
	Rectangle(int side_a, int side_b)
		: Quadrangle(side_a, side_b, side_a, side_b, 90, 90, 90, 90) {}

	std::string get_name() const override {
		return "Прямоугольник";
	}

	void display_info() const override {
		Quadrangle::display_info();
	}

	bool check() const override {
		return Quadrangle::check() && a == c && b == d && A == B && B == C && C == D && A == 90;
	}
};

class Square : public Rectangle {
public:
	Square(int side)
		: Rectangle(side, side) {}

	std::string get_name() const override {
		return "Квадрат";
	}

	void display_info() const override {
		Rectangle::display_info();
	}

	bool check() const override {
		return Rectangle::check() && a == b;
	}
};

class Parallelogram : public Quadrangle {
public:
	Parallelogram(int side_a, int side_b, int angle_A, int angle_B)
		: Quadrangle(side_a, side_b, side_a, side_b, angle_A, angle_B, angle_A, angle_B) {}

	std::string get_name() const override {
		return "Параллелограмм";
	}

	void display_info() const override {
		Quadrangle::display_info();
	}

	bool check() const override {
		return Quadrangle::check() && a == c && b == d && A == C && B == D;
	}
};

class Rhombus : public Parallelogram {
public:
	Rhombus(int side, int angle_A, int angle_B)
		: Parallelogram(side, side, angle_A, angle_B) {}

	std::string get_name() const override {
		return "Ромб";
	}

	void display_info() const override {
		Parallelogram::display_info();
	}

	bool check() const override {
		return Parallelogram::check() && a == b;
	}
};

int main() {
	setlocale(LC_ALL, "rus");

	Figure figure;
	Triangle triangle(3, 4, 5, 90, 60, 30);
	RightTriangle right_triangle(3, 4, 5);
	IsoscelesTriangle isosceles_triangle(5, 5, 70, 70);
	EquilateralTriangle equilateral_triangle(5);
	Quadrangle quadrangle(4, 4, 4, 4, 90, 90, 90, 90);
	Rectangle rectangle(4, 6);
	Square square(5);
	Parallelogram parallelogram(4, 6, 120, 60);
	Rhombus rhombus(5, 120, 60);

	figure.display_info();
	std::cout << std::endl;

	triangle.display_info();
	std::cout << std::endl;

	right_triangle.display_info();
	std::cout << std::endl;

	isosceles_triangle.display_info();
	std::cout << std::endl;

	equilateral_triangle.display_info();
	std::cout << std::endl;


	quadrangle.display_info();
	std::cout << std::endl;

	parallelogram.display_info();
	std::cout << std::endl;

	rectangle.display_info();
	std::cout << std::endl;

	rhombus.display_info();
	std::cout << std::endl;

	square.display_info();
	std::cout << std::endl;

	return 0;
}
