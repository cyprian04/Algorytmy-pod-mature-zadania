#include <iostream>

int main() {
	int num = 0;
	int digit = 0;
	int total = 0;
	std::cout << "Podaj liczbe naturalna: ";
	std::cin >> num;

	while (num != 0){
		digit = num % 10;
		num -= digit;
		num /= 10;
		total++;
	}
	if (total == 0) total++;
	std::cout << total;

	return 0;
}