#include <iostream>
// alokacja na heap'ie, zrozumiałem że wartości mają być pod koniec dlatego jest 2 for :)
int main() {
	int* nums = nullptr;
	int size = 0;

	std::cout << "Podaj ile liczb chcesz sprawdzic, ktore sa liczbami pierwszymi: ";
	std::cin >> size;
	nums = new int[size];

	for (int i = 0; i < size; i++) {
		std::cout << "Podaj liczbe :";
		std::cin >> nums[i];
	}

	for (int i = 0; i < size; i++) {
		bool isPrime = true;
		for (int j = 2; j < nums[i]; j++)
			if (nums[i] % j == 0) {
				isPrime = false;
				break;
			}
		if (isPrime && nums[i] != 1)
			std::cout << nums[i] << " jest pierwsza\n";
		else
			std::cout << nums[i] << " NIE jest pierwsza\n";
	}
	delete[] nums; // usuniecie z heapa
	nums = nullptr;
	return 0;
}