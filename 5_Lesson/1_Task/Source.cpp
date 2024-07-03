#include <iostream>
#include <cmath>

// сложение
inline int summ(int x, int y) {
	return x + y;
}

// вычитание
inline int sub(int x, int y) {
	return x - y;
}

// умножение
inline int mult(int x, int y) {
	return x * y;
}

// деление
inline int divis(int x, int y) {
	if (y == 0) {
		std::cerr << "Ошибка: деление на ноль." << std::endl;
		return 0;
	}
	return x / y;
}

// возведение в степень
inline double exp(int x, int y) {
	return pow(x,y);
}