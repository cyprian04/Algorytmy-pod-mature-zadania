#include <iostream>

bool dividedBy(int value) {
	return (value % 3 == 0) && (value % 5 == 0);
}

int main() {
	int num;
	std::cout << "Podaj liczbe: ";
	std::cin >> num;

	if (dividedBy(num))
		std::cout << "Jest podzielna na 3 i 5";
	else
		std::cout << "NIE jest podzielna na 3 i 5";
	return 0;
}