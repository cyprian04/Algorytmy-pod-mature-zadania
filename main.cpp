#include <iostream>

int CurrentAge(int year_in) {
	return 2023 - year_in;
}

int main() {
	int year;
	std::cout << "Podaj rok urodzenia: ";
	std::cin >> year;
	std::cout << "twoj wiek to: " << CurrentAge(year);
	return 0;
}