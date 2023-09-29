#include <iostream>

int main() {
	int num = 0;
	int digit = 0;
	std::cout << "Podaj liczbe naturalna: ";
	std::cin >> num;

	while (num != 0) {
		digit = num % 10;
		std::cout << digit;
		num -= digit;
		num /= 10;
	}
	return 0;
}