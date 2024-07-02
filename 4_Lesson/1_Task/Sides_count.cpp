
#include <iostream>
#include <string>

class Figure {
protected:
	int sides_count;

public:
	Figure(int sides) : sides_count(sides) {};

	virtual std::string get_name() const {
		return "Фигура";
	}

	int get_sides_count() const {
		return sides_count;
	}
};

class Triangle : public Figure {
public:
	Triangle() : Figure(3) {};
	std::string get_name() const override {
		return "Треугольник";
	}
};

class Quadrangle : public Figure {
public:
	Quadrangle() : Figure(4) {};
	std::string get_name() const override {
		return "Четырехугольник";
	}
};


int main()
{
	setlocale(LC_ALL, "rus");

	Figure figure(0);
	Triangle triangle;
	Quadrangle quadrangle;

	std::cout << "Количество сторон:" << std::endl;
	std::cout << figure.get_name() << ": " << figure.get_sides_count() << std::endl;
	std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << std::endl;
	std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << std::endl;

	return 0;
}