
#include <iostream>
#include <string>

struct Adress
{
	std::string city;
	std::string street;
	int house_number;
	int flat_number;
	int index;

	void print_struct(Adress)
	{
		std::cout << "Город: " << city
			<< "\nУлица: " << street
			<< "\nНомер дома: " << house_number
			<< "\nНомер квартиры: " << flat_number
			<< "\nИндекс: " << index
			<<"\n\n";
	};
};

int main()
{
	setlocale(LC_ALL, "rus");
	Adress A = { "Москва", "Арбат", 12, 8, 123456 };
	Adress B = { "Ижевск", "Пушкина", 59, 143, 953769 };

	A.print_struct(A);
	B.print_struct(B);

	return 0;
}

