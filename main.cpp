#include <iostream>

int main() {
	int num = 0;
	std::cout << "Podaj liczbe dodatnia, wieksza od 1: ";
	std::cin >> num;

	for (int i = 1; i < num ; i++)
		if (i % 2 != 0)
			std::cout << i <<" | ";
	return 0;
}