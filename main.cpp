#include <iostream>

int HowManyA(const std::string text_in) {
	int sum = 0;
	for (int i = 0; i < text_in.length(); i++)
		if (text_in[i] == 'a' || text_in[i] == 'A')
			sum++;
	return sum;
}

int main() {
	std::string text;
	std::cout << "Podaj wyraz: ";
	std::cin >> text;
	std::cout << "W tym wyrazie jest: "<<HowManyA(text)<<" a";

	return 0;
}