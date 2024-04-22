#include <iostream>
#include <vector>

bool isPalindrom(const std::string text_in) {
	for (int i = 0; i < text_in.length(); i++)
		if (text_in[i] != text_in[text_in.length() - 1 - i])
			return false;
	return true;
}

int main(){
	int vecSize = 0;
	std::vector<std::string> napisy;

	std::cout << "The number of strings: ";
	std::cin >> vecSize;
	for (int i = 0; i < vecSize; i++){
		std::string text;
		std::cin >> text;
		if(isPalindrom(text))
			napisy.push_back(text);
	}

	std::cout << '\n';
	for (const auto& c : napisy)
		std::cout << c <<'\n';

	return 0;
}

