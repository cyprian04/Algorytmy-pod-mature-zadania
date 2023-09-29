#include <iostream>

int main() {
	int num = 0;
	int digit = 0;
	std::cout << "Podaj liczbe: ";
	std::cin >> num;

	while (num != 0){
		digit = num % 10;
		std::cout << digit * digit << " | ";
		num -= digit;
		num /= 10;
	}
	return 0;
}