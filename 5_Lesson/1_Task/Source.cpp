#include <iostream>
#include <cmath>

// ��������
inline int summ(int x, int y) {
	return x + y;
}

// ���������
inline int sub(int x, int y) {
	return x - y;
}

// ���������
inline int mult(int x, int y) {
	return x * y;
}

// �������
inline int divis(int x, int y) {
	if (y == 0) {
		std::cerr << "������: ������� �� ����." << std::endl;
		return 0;
	}
	return x / y;
}

// ���������� � �������
inline double exp(int x, int y) {
	return pow(x,y);
}