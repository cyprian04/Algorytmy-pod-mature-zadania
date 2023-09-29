#include <iostream>

int main() {
	int num = 0;
	int digit = 0;
	int total = 0;
	std::cout << "Podaj liczbe naturalna: ";
	std::cin >> num;

	while (num != 0){
		bool isPrime = true;
		digit = num % 10;

		for (int i = 2; i < digit; i++)
			if (digit % i == 0) {
				isPrime = false;
				break;
			}
		if (isPrime) total++;
		num -= digit;
		num /= 10;
	}
	std::cout << total;

	return 0;
}