#include <iostream>
// uroki robienia zadań po 10 godzinach w szkole ;), poprawione
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
	if (isPrime)
		std::cout << "Jest pierwsza";
	else
		std::cout << "NIE jest pierwsza";

	return 0;
}