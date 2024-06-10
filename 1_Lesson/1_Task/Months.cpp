
#include <iostream>
#include <string>

enum class Months
{
	Январь = 1, Февраль, Март, Апрель, Май, Июнь, Июль, Август, Сентябрь, Октябрь, Ноябрь, Декабрь
};

std::string monthToString(Months month) {
	switch (month) {
	case Months::Январь: return "Январь";
	case Months::Февраль: return "Февраль";
	case Months::Март: return "Март";
	case Months::Апрель: return "Апрель";
	case Months::Май: return "Май";
	case Months::Июнь: return "Июнь";
	case Months::Июль: return "Июль";
	case Months::Август: return "Август";
	case Months::Сентябрь: return "Сентябрь";
	case Months::Октябрь: return "Октябрь";
	case Months::Ноябрь: return "Ноябрь";
	case Months::Декабрь: return "Декабрь";
	}
}

void Count_Month(int numb)
{
	switch (numb)
	{
	case 0:
		std::cout << "До свидания!" << std::endl;
		break;

	case 1:
	{Months month = Months::Январь;
	std::cout << monthToString(month) << std::endl;
	break; }

	case 2:
	{Months month = Months::Февраль;
	std::cout << monthToString(month) << std::endl;
	break; }

	case 3:
	{Months month = Months::Март;
	std::cout << monthToString(month) << std::endl;
	break; }

	case 4:
	{Months month = Months::Апрель;
	std::cout << monthToString(month) << std::endl;
	break; }

	case 5:
	{Months month = Months::Май;
	std::cout << monthToString(month) << std::endl;
	break; }

	case 6:
	{Months month = Months::Июнь;
	std::cout << monthToString(month) << std::endl;
	break; }

	case 7:
	{Months month = Months::Июль;
	std::cout << monthToString(month) << std::endl;
	break; }

	case 8:
	{Months month = Months::Август;
	std::cout << monthToString(month) << std::endl;
	break; }

	case 9:
	{Months month = Months::Сентябрь;
	std::cout << monthToString(month) << std::endl;
	break; }

	case 10:
	{Months month = Months::Октябрь;
	std::cout << monthToString(month) << std::endl;
	break; }

	case 11:
	{Months month = Months::Ноябрь;
	std::cout << monthToString(month) << std::endl;
	break; }

	case 12:
	{Months month = Months::Декабрь;
	std::cout << monthToString(month) << std::endl;
	break; }

	default:
		std::cout << "Неправильный номер!" << std::endl;
		break;
	}
}

int main()
{
	int numb = 1;
	setlocale(LC_ALL, "rus");

	while (numb != 0)
	{
		std::cout << "Введите номер месяца: ";
		std::cin >> numb;
		Count_Month(numb);
	}

	return 0;
}
