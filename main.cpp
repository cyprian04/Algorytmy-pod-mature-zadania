#include <iostream>
int main() {
	std::string text;
	std::cout << "Podaj wyraz: ";
	std::cin >> text;
	for (size_t i = 0; i < text.length(); i++)
		if (text[i] != text[text.length() - 1 - i]) {
			std::cout << "Nie jest palindromem";
			return 0;
		}
	std::cout << "jest palindromem";
	return 0;
}