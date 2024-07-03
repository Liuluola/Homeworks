#include <iostream>
#include <string>
#include "Header.h"

Counter::Counter() : value(1) {}

Counter::Counter(int c_value) : value(c_value) {}

int Counter::value_up() {
	return ++value;
}

int Counter::value_down() {
	return --value;
}

void Counter::getValue() {
	std::cout << value << std::endl;
}

void Counter::get(Counter& count, std::string& command) {
	for (;;) {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::getline(std::cin, command);

		if (command == "+") {
			count.value_up();
		}
		else if (command == "-") {
			count.value_down();
		}
		else if (command == "=") {
			count.getValue();
		}
		else if (command == "x") {
			std::cout << "До свидания!" << std::endl;
			break;
		}
	}
}