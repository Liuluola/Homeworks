
#include <iostream>
#include <string>

struct bank_account
{
	int account_number;
	std::string person_name;
	double account_balance;
};

double balance_change(bank_account* b, double new_balance)
{
	double account_balance = new_balance;
	return account_balance;
}

int main()
{
	int account_number;
	std::string person_name;
	double account_balance;
	double new_balance;

	struct bank_account b;
	setlocale(LC_ALL, "rus");

    std::cout << "Введите номер счёта: ";
	std::cin >> b.account_number;

	std::cout << "Введите имя владельца: ";
	std::cin >> b.person_name;

	std::cout << "Введите баланс: ";
	std::cin >> b.account_balance;

	std::cout << "Введите новый баланс: ";
	std::cin >> new_balance;

	std::cout << "Ваш счёт: " << b.person_name << ", " << b.account_number << ", " << balance_change(&b, new_balance);

	return 0;
}
