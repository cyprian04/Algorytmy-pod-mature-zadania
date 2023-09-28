#include <iostream>

int main() {
	int num = 0;
	std::cout << "Podaj liczbe dodatnia: ";
	std::cin >> num;

	for (int i = 1; i <= num; i++)
		if(num% i == 0)
		   std::cout << i <<" | ";
	return 0;
}