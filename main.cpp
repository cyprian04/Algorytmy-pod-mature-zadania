#include <iostream>

int main() {
	int num = 0;
	int digit = 0;
	int even = 0;
	int odd = 0;
	std::cout << "Podaj liczbe naturalna: ";
	std::cin >> num;

	while (num != 0) {
		digit = num % 10;
		if (digit % 2 == 0) even++;
		else odd++;
		num -= digit;
		num /= 10;
	}

	if(even > odd)
		std::cout << "wiecej jest parzystych";
	else if (even < odd)
		std::cout << "wiecej jest nieparzystych";
	else
		std::cout << "jest tyle samo parzystch co nieparzystych";
	return 0;
}