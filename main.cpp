#include <iostream>

int main() {
	int array[10];

	for (int i = 0; i < 10; i++) {
		std::cout << "Podaj liczbe numer " <<i+1<<": ";
		std::cin >> array[i];
	}	
	for (int i = 9; i >= 0 ; i--)
		std::cout << array[i] <<" ";
	return 0;
}