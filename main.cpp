#include <iostream>

int main() {
	int num = 0;
	std::cout << "Podaj liczbe dodatnia, wieksza od 1: ";
	std::cin >> num;

	for (int i = 2; i <= num ; i*=2)
			std::cout << i <<" | ";
	return 0;
}