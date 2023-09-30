#include <iostream>
int main() {
	int num = 0;
	std::cout << "Podaj ciag liczb, jesli chcesz przestac wprowadz 0\n";

	while (std::cin >> num) {
		if (num == 0) break;
		std::cout<<"Potega liczby "<< num <<" to " << num * num << std::endl;
	}
	return 0;
}