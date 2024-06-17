﻿#include <iostream>

class Calculator
{
public:

	double num1;
	double num2;

	double add()
	{
		return num1 + num2;
	}

	double multiply()
	{
		return num1 * num2;
	}

	double subtract_1_2()
	{
		return num1 - num2;
	}

	double subtract_2_1()
	{
		return num2 - num1;
	}

	double divide_1_2()
	{
		return num1 / num2;
	}

	double divide_2_1()
	{
		return num2 / num1;
	}

	bool set_num1(double num1)
	{
		this->num1 = num1;

		if (num1 != 0)
			return true;
		else
			return false;
	}

	bool set_num2(double num2)
	{
		this->num2 = num2;

		if (num2 != 0)
			return true;
		else
			return false;
	}

};

int main()
{
	double num1, num2;
	setlocale(LC_ALL, "rus");

	Calculator calc;

	for ( ; ; )
	{
		
		for ( ; ; )
		{
			std::cout << "Введите num1: ";
			std::cin >> num1;

			if (calc.set_num1(num1) != true)
			{
				std::cout << "Неверный ввод!" << std::endl;
			}

			else break;
		}

		for (; ; )
		{
			std::cout << "Введите num2: ";
			std::cin >> num2;

			if (calc.set_num2(num2) != true)
			{
				std::cout << "Неверный ввод!" << std::endl;
			}

			else break;
		}
				
		calc.num1 = num1;
		calc.num2 = num2;

		std::cout << "num1 + num2 = " << calc.add() << std::endl;
		std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
		std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
		std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
		std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl << std::endl;

	}

	return 0;
}
