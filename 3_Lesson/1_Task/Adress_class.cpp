#include <iostream>
#include <string>
#include <fstream>

class Adress {

private:
	std::string city;
	std::string street;
	std::string house;
	std::string flat;

public:
	Adress(std::string &city, std::string &street, std::string &house, std::string &flat)
		: city(city), street(street), house(house), flat(flat) {};

	Adress() {};

	std::string get_output_address() {

		return city + ", " + street + ", " + house + ", " + flat;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	int quant;
	std::string city, street, house, flat;
	std::ifstream inFile("C:\\Users\\Heft\\Desktop\\C++\\3_ Основы программирования\\Homework\\3_Lesson\\1_Task\\in.txt");
	std::ofstream outFile("C:\\Users\\Heft\\Desktop\\C++\\3_ Основы программирования\\Homework\\3_Lesson\\1_Task\\out.txt");
	
	if (inFile.is_open()) {

		inFile >> quant;
	}

	else {

		std::cout << "File can not be open";
	}

	inFile.ignore();

	Adress* adress = new Adress[quant];

	for (int i = 0; i < quant; ++i) {
		std::getline(inFile, city);
		std::getline(inFile, street);
		std::getline(inFile, house);
		std::getline(inFile, flat);

		adress[i] = Adress(city, street, house, flat);

		std::cout << city << std::endl;
		std::cout << street << std::endl;
		std::cout << house << std::endl;
		std::cout << flat << std::endl;
	}

	outFile << quant << std::endl;
	for (int i = quant - 1; i >= 0; --i) {
		outFile << adress[i].get_output_address() << std::endl;
	}


	delete[] adress;

	inFile.close();
	outFile.close();

	return 0;
}
