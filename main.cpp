#include <iostream>

bool isInRange(const int num1, const int num2, const int num3) {
	return (num1 >= 13 && num1 <= 19) || (num2 >= 13 && num2 <= 19) || (num3 >= 13 && num3 <= 19);
}

int main() {
	int nums[3] = {0};

	for (int i = 0; i < 3; i++) {
		std::cout << "Podaj liczbe "<< i+1 <<": ";
		std::cin >>nums[i];
	}

	if (isInRange(nums[0], nums[1], nums[2]))
		std::cout << "Co najmniej jedna z nich nalezy do przedzialu od 13 do 19";
	else
		std::cout << "Zadna z nich nie nalezy do przedzialu od 13 do 19";
	return 0;
}