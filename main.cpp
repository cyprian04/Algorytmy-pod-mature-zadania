#include <iostream>
using namespace std;

void merge(char tab[], int lewyIndex, int pivot, int prawyIndex, char pomocnicza[]) {
	for (int i = lewyIndex; i <= prawyIndex; i++)
		pomocnicza[i] = tab[i];

	int indexLewej = lewyIndex;
	int indexPrawej = pivot + 1;
	int index = lewyIndex;

	while (indexLewej <= pivot && indexPrawej <= prawyIndex) {

		if (pomocnicza[indexLewej] <= pomocnicza[indexPrawej]) {
			tab[index] = pomocnicza[indexLewej];
			indexLewej++;
		}
		else {
			tab[index] = pomocnicza[indexPrawej];
			indexPrawej++;
		}
		index++;
	}

	while (indexLewej <= pivot) {
		tab[index] = pomocnicza[indexLewej];
		indexLewej++;
		index++;
	}
}

void mergeSort(char tab[], int lewyIndex, int prawyIndex, char pomocnicza[]) {

	if (lewyIndex != prawyIndex) {
		int pivot = (lewyIndex + prawyIndex) / 2;

		mergeSort(tab, lewyIndex, pivot, pomocnicza);
		mergeSort(tab, pivot+1, prawyIndex, pomocnicza);
		merge(tab, lewyIndex, pivot, prawyIndex, pomocnicza);
	}
}

int main() {
	char tab[8] = { 'A', 'Y', 'D', 'B', 'O', 'H', 'C' ,'Z'};
	char pomocnicza[8];
	cout << " Przed sortowaniem \n";
	for (auto sign : tab)
		cout << sign << " ";

	mergeSort(tab, 0, 7, pomocnicza);
	
	cout << "\n Po sortowaniu \n";
	for (auto num : tab)
		cout << num << " ";
	return 0;
}