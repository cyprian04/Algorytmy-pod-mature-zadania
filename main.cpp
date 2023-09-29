#include <iostream>

int main() {
	int num = 0;
	int digit = 0;
	int total = 0;
	std::cout << "Podaj liczbe: ";
	std::cin >> num;

	while (num != 0){
		digit = num % 10;
		if (digit % 2 != 0)
			total += digit;
		num -= digit;
		num /= 10;
	}
	std::cout << total;

	return 0;
}