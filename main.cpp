#include <iostream>

bool isPalindrom(const std::string text_in) {
	for (int i = 0; i < text_in.length(); i++)
		if (text_in[i] != text_in[text_in.length() - 1 - i])
			return false;
	return true;
}

int main() {
	std::string text;
	std::cout << "Podaj wyraz: ";
	std::cin >> text;

	if (isPalindrom(text))
		std::cout << "Jest palindromem";
	else
		std::cout << "Nie jest palindromem";
	return 0;
}