#include <iostream>

int main() {
	int num = 0;
	int orginal = 0;

	std::cout << "Podaj liczbe naturalna: ";
	std::cin >> num;
	orginal = num;

	for (int i = 2; num != 1;) {
		if (num % i == 0){
			num/=i;
			std::cout << i <<" ";
			i = 2;
			continue;
		}
		i++;
	}
	std::cout << "= " <<orginal;

	return 0;
}