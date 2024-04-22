#include <iostream>

bool isPrime(int num) {
	for (int i = 2; i < num ; i++)
		if (num % i == 0)
			return false;
	return true && (num != 1);
}

int main(){
	int size = 0;
	int* arr = nullptr;

	std::cout << "Podaj ilosc liczb do sprawdzenia: ";
	std::cin >> size;
	arr = new int[size];

	for (int i = 0; i < size; i++){
		std::cout << "Podaj liczbe " << i + 1 << ":";
		std::cin >> arr[i];
	}
	
	for (int i = 0; i < size; i++){
		if (isPrime(arr[i]))
			std::cout << arr[i] << "Jest liczba pierwsza"<<std::endl;
		else
			std::cout << arr[i] << "NIE Jest liczba pierwsza"<<std::endl;
	}
	return 0;
}
