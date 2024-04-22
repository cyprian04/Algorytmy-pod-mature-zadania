#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int shiftCount = 0;
	int currentShift = 0;
	int size = 0;
	int* arr = nullptr;

	cout << "Podaj ilosc przesuniec: ";
	cin >> shiftCount;
	cout << "Podaj rozmiar tablicy: ";
	cin >> size;
	arr = new int[size];

	for (int i = 0; i < size; i++) {
		cout << "Podaj liczbe do tablicy: ";
		cin >> arr[i];
	}

	for (int i = size-1; i > 0 && currentShift < shiftCount;){
		swap(arr[i -1], arr[i]);
		if (i == 1) {
			i = size-1;
			currentShift++;
			continue;
		}
		i--;
	}

	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";

	delete[] arr;
	return 0;
}