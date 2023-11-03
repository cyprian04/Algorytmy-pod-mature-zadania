#include <iostream>
using namespace std;

void merge(int tab[], int lewyIndex, int pivot, int prawyIndex, int pomocnicza[]) {
	for (int i = lewyIndex; i <= prawyIndex; i++)
		pomocnicza[i] = tab[i];

	int indexLewej = lewyIndex;
	int indexPrawej = pivot + 1;
	int index = lewyIndex;

	while (indexLewej <= pivot && indexPrawej <= prawyIndex) {

		if (pomocnicza[indexLewej] <= pomocnicza[indexPrawej]) {
			tab[index] = pomocnicza[indexPrawej];
			indexPrawej++;
		}
		else {
			tab[index] = pomocnicza[indexLewej];
			indexLewej++;
		}
		index++;
	}

	while (indexLewej <= pivot) {
		tab[index] = pomocnicza[indexLewej];
		indexLewej++;
		index++;
	}
}

void mergeSort(int tab[], int lewyIndex, int prawyIndex, int pomocnicza[]) {

	if (lewyIndex != prawyIndex) {
		int pivot = (lewyIndex + prawyIndex) / 2;

		mergeSort(tab, lewyIndex, pivot, pomocnicza);
		mergeSort(tab, pivot+1, prawyIndex, pomocnicza);
		merge(tab, lewyIndex, pivot, prawyIndex, pomocnicza);
	}
}

int main() {
	int tab[8] = { 8, 10, 2, 2, 3, 5, 6 ,1 };
	int pomocnicza[8];
	cout << " Przed sortowaniem \n";
	for (auto num : tab)
		cout << num << " ";

	mergeSort(tab, 0, 7, pomocnicza);
	
	cout << "\n Po sortowaniu \n";
	for (auto num : tab)
		cout << num << " ";
	return 0;
}