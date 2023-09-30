#include <iostream>
int main() {
	int count = 0;
	std::string text;
	std::cout << "Podaj wyraz: ";
	std::cin >> text;

	for (size_t i = 0; i < text.length(); i++)
		if (text[i] == 'a' || text[i] == 'A')
			count++;
	std::cout << "Wyraz " <<text<<" ma "<< count <<" a";
	return 0;
}