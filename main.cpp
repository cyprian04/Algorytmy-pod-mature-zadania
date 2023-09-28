#include <iostream>

int main() {
	int num = 0;
	int handler = 0;
	bool isPrime = true;

	std::cout << "Podaj liczbe naturalna: ";
	std::cin >> num;

	for (int i = 1; i <= num ;i++){ 
		if (num % i == 0) {

			handler++;
			if (handler > 2) {
				isPrime = false;
				break;
			}
		}
	}
	if (isPrime)
		std::cout <<"Jest pierwsza";
	else
		std::cout << "NIE jest pierwsza";

	return 0;
}