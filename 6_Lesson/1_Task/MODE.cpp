#include <iostream>

#define MODE 1

#ifndef MODE
#error "MODE не определен. Определите MODE перед компиляцией."
#endif

#if MODE == 1
int add(int a, int b) {
	return a + b;
}
#endif

int main() {
	setlocale(LC_ALL, "rus");
#if MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
	std::cout << "Работаю в боевом режиме" << std::endl;
	int x, y;
	std::cout << "Введите первое число: ";
	std::cin >> x;
	std::cout << "Введите второе число: ";
	std::cin >> y;
	std::cout << "Результат сложения: " << add(x, y) << std::endl;
#else
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif

	return 0;
}