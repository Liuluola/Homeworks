#include <iostream>
#include <string>

class Counter {
protected:

	int value;

public:

	Counter()
	{
		this->value = 1;
	}

	Counter(int c_value)
	{
		this->value = c_value;
	}

	int value_up()
	{
		this->value = value + 1;
		return value;
	}

	int value_dowm()
	{
		this->value = value - 1;
		return value;
	}

	void getValue()
	{
		std::cout << value;
		std::cout << std::endl;
	}

	void get(Counter count, std::string command)
	{
		for (; ; )
		{
			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::getline(std::cin, command);


			if (command == "+")
			{
				value = count.value_up();
			}

			if (command == "-")
			{
				value = count.value_dowm();
			}

			if (command == "=")
			{
				count.getValue();
			}

			if (command == "x")
			{
				std::cout << "До свидания!";
				break;
			}
		}

	}
};

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

