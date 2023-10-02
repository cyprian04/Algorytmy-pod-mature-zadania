#include <iostream>
#include <cmath>
int main() {
	int shiftCount = 0;
	int currentShift = 0;
	int size = 0;
	int* arr = nullptr;

	std::cout << "Podaj ilosc przesuniec: ";
	std::cin >> shiftCount;
	std::cout << "Podaj rozmiar tablicy: ";
	std::cin >> size;
	arr = new int[size];

	for (int i = 0; i < size; i++) {
		std::cout <<"Podaj liczbe do tablicy: ";
		std::cin >> arr[i];
	}

	for (int i = 0; i < size - 1 && currentShift < shiftCount;) {
		std::swap(arr[i + 1], arr[i]);
		if (i == size - 2) {
			i = 0;
			currentShift++;
			continue;
		}
		i++;
	}

	for (int i = 0; i < size; i++)
		std::cout << arr[i] <<", ";

	delete[] arr;
	return 0;
}