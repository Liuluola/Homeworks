
#include <iostream>
#include <string>

class Triangle {
protected:
	int a, b, c, A, B, C;

public:
	Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C)
		: a(side_a), b(side_b), c(side_c), A(angle_A), B(angle_B), C(angle_C) {}

	virtual std::string get_name() const {
		return "Треугольник:";
	}

	void display_info() const {
		std::cout << get_name() << ":" << std::endl;
		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
	}
};

class Right_triangle : public Triangle {
public:
	Right_triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B)
		: Triangle(side_a, side_b, side_c, angle_A, angle_B, 90) {}

	std::string get_name() const override {
		return "Прямоугольный треугольник";
	}
};

class Isosceles_triangle : public Triangle {
public:
	Isosceles_triangle(int side_a, int side_b, int angle_A, int angle_B)
		: Triangle(side_a, side_b, side_a, angle_A, angle_B, angle_A) {}

	std::string get_name() const override {
		return "Равнобедренный треугольник";
	}
};

class Equilateral_triangle : public Triangle {
public:
	Equilateral_triangle(int side_a, int angle_A)
		: Triangle(side_a, side_a, side_a, angle_A, angle_A, angle_A) {}

	std::string get_name() const override {
		return "Равносторонний треугольник";
	}
};

class Quadrangle {
protected:
	int a, b, c, d, A, B, C, D;

public:
	Quadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D)
		: a(side_a), b(side_b), c(side_c), d(side_d), A(angle_A), B(angle_B), C(angle_C), D(angle_D) {}

	virtual std::string get_name() const {
		return "Четырехугольник:";
	}

	void display_info() const {
		std::cout << get_name() << ":" << std::endl;
		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
	}
};

class Parallelogram : public Quadrangle {
public:
	Parallelogram(int side_a, int side_b, int angle_A, int angle_B) :
		Quadrangle(side_a, side_b, side_a, side_b, angle_A, angle_B, angle_A, angle_B) {}

	std::string get_name() const override {
		return "Параллелограмм:";
	}
};

class Rectangle : public Parallelogram {
public:
	Rectangle(int side_a, int side_b) :
		Parallelogram(side_a, side_b, 90, 90) {}

	std::string get_name() const override {
		return "Прямоугольник:";
	}
};

class Rhombus : public Parallelogram {
public:
	Rhombus(int side_a, int angle_A, int angle_B) :
		Parallelogram(side_a, side_a, angle_A, angle_B) {}

	std::string get_name() const override {
		return "Ромб:";
	}
};

class Square : public Rhombus {
public:
	Square(int side_a) :
		Rhombus(side_a, 90, 90) {}

	std::string get_name() const override {
		return "Квадрат:";
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	
	Triangle triangle(10, 20, 30, 50, 60, 70);
	Right_triangle right_triangle(10, 20, 30, 50, 60);
	Isosceles_triangle isosceles_triangle(10, 20, 50, 60);
	Equilateral_triangle equilateral_triangle(30, 60);

	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	Parallelogram parallelogram(20, 30, 30, 40);
	Rectangle rectangle(10, 20);
	Rhombus rhombus(30, 30, 40);
	Square square(20);

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
