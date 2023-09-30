#include <iostream>
#include <vector>
// dla odmiany użycie vectora :)
int main() {
	int vecSize = 0;
	std::string text;
	std::vector<std::string> strings;

	std::cout << "Podaj ilosc wyrazow do sprawdzenia: ";
	std::cin >> vecSize;

	for (size_t i = 0; i < vecSize; i++) {
		std::cout <<"Podaj wyraz: ";
		std::cin >> text;
		strings.push_back(text);
	}

	for (const auto& text : strings){
		bool flag = true;
		for (size_t i = 0; i < text.length(); i++)
			if (text[i] != text[text.length() -1 -i]){
				flag = false;
				break;
			}
		if (flag)
			std::cout << "Jest palindromem\n";
		else
			std::cout << "Nie Jest palindromem\n";
	}
	return 0;
}