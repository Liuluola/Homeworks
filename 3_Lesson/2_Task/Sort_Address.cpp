#include <iostream>
#include <fstream>
#include <string>

struct Address {
	std::string city;
	std::string street;
	int house;
	int apartment;
};

void bubbleSort(Address arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j].city > arr[j + 1].city) {

				Address temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


int main() {
	int N;
	std::ifstream inFile("C:\\Users\\Heft\\Desktop\\C++\\3_ Основы программирования\\Homework\\3_Lesson\\2_Task\\in.txt");
	std::ofstream outFile("C:\\Users\\Heft\\Desktop\\C++\\3_ Основы программирования\\Homework\\3_Lesson\\2_Task\\out.txt");

	if (inFile.is_open()) {

		inFile >> N;
		inFile.ignore();
	}

	else {

		std::cout << "File can not be open";
	}

	Address* addresses = new Address[N];

	for (int i = 0; i < N; ++i) {
		std::getline(inFile, addresses[i].city);
		std::getline(inFile, addresses[i].street);
		inFile >> addresses[i].house >> addresses[i].apartment;
		inFile.ignore();
	}

	bubbleSort(addresses, N);

	outFile << N << std::endl;

	for (int i = 0; i < N; ++i) {
		outFile << addresses[i].city << ", " << addresses[i].street << ", "
			<< addresses[i].house << ", " << addresses[i].apartment << std::endl;
	}

	delete[] addresses;

	inFile.close();
	outFile.close();

	return 0;
}