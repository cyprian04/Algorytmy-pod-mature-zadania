#include <iostream>
int main() {
	std::string text;
	bool flag = true;
	std::cout << "Podaj wyraz: ";
	std::cin >> text;
	for (int i = 0; i < text.length(); i++)
		if (text[i] != text[text.length() -1 -i]){
			std::cout << "Nie jest palindromem";
			return 0;
		}
	if (flag)
		std::cout << "jest palindromem";
	return 0;
}