#include <iostream>
#include <string>
#include <map> // zastoswanie mapy do przechowywania klucza(znaku), wartości int(w tym przypadku liczy wystąpień tego znaku)

int main() {
	std::map<char, int> signs;
	std::string text;
	std::string orginal;

	std::cout << "Podaj napis: ";
	std::getline(std::cin,text);
	orginal = text;

	for (auto &s: text)
		if (s != ' ') {
			if (s >= 'A' && s <= 'Z') 
				s += 'a' - 'A';// jeśli są duże to konwersja na małe
			signs[s]++;
		}

	std::cout << "Dla napisu: " << orginal << std::endl;
	for (const auto& s : signs)
		std::cout << s.first << " wystapilo: " << s.second << std::endl;

	return 0;
}