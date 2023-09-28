#include <iostream>

int main() {
	int num = 0;
	int digit = 0;
	std::cout << "Podaj liczbe: ";
	std::cin >> num;

	for (int handler = 10; num != 0; num -= digit, num /= 10){
		digit = num % handler;
		std::cout << digit * digit << " | ";
	}
	return 0;
}