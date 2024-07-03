#include <iostream>
#include <string>
#include "Header.h"


int main()
{
	int x, y;
	int oper;
	int result;

	setlocale(LC_ALL, "RUS");
    std::cout << "Введите первое число: ";
	std::cin >> x;

	std::cout << "Введите второе число: ";
	std::cin >> y;

	std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> oper;

	std::cout << x;

	switch (oper) {
	case 1: {std::cout << " плюс "; result = summ(x, y); break; }
	case 2: {std::cout << " минус "; result = sub(x, y); break; }
	case 3: {std::cout << " умножить на "; result = mult(x, y); break; }
	case 4: {std::cout << " поделить на "; result = divis(x, y); break; }
	case 5: {std::cout << " в степени "; result = exp(x, y); break; }
	default: {std::cout << " Неверная операция"; return 1; }
	}

	std::cout << y << " = " << result;

	return 0;
}
