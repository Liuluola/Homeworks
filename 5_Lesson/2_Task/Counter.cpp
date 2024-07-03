#include <iostream>
#include <string>
#include"Header.h"


int main()
{
	std::string answer, command;
	int value;
	setlocale(LC_ALL, "rus");

	std::cout << "Вы хотите указать начальное значение счётчика? Введите Y или N: ";
	std::getline(std::cin, answer);



	if (answer == "Y")
	{
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> value;
		Counter counts(value);
		counts.get(counts, command);
	}

	else
	{
		Counter counts;
		counts.get(counts, command);
	}
	return 0;
}

