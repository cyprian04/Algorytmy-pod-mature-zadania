﻿#include <iostream>
int main() {
	int num = 0;
	bool isPrime = true;

	std::cout << "Podaj liczbe naturalna: ";
	std::cin >> num;

	for (int i = 2; i < num; i++)
		if (num % i == 0) {
			isPrime = false;
			break;
		}
	if (isPrime && num != 1)
		std::cout << "Jest pierwsza";
	else
		std::cout << "NIE jest pierwsza";

	return 0;
}