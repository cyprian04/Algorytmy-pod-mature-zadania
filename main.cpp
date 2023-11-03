#include <iostream>
using namespace std;

void merge(int tab[3][4], int column, int lewyIndex, int pivot, int prawyIndex, int pomocnicza[3][4]) {
	for (int i = lewyIndex; i <= prawyIndex; i++)
		pomocnicza[i][column] = tab[i][column];

	int indexLewej = lewyIndex;
	int indexPrawej = pivot + 1;
	int index = lewyIndex;

	while (indexLewej <= pivot && indexPrawej <= prawyIndex) {

		if (pomocnicza[indexLewej][column] <= pomocnicza[indexPrawej][column]) {
			tab[index][column] = pomocnicza[indexLewej][column];
			indexLewej++;
		}
		else {
			tab[index][column] = pomocnicza[indexPrawej][column];
			indexPrawej++;
		}
		index++;
	}

	while (indexLewej <= pivot) {
		tab[index][column] = pomocnicza[indexLewej][column];
		indexLewej++;
		index++;
	}
}

void mergeSort(int tab[3][4], int column ,int lewyIndex, int prawyIndex, int pomocnicza[3][4]) {

	if (lewyIndex != prawyIndex) {
		int pivot = (lewyIndex + prawyIndex) / 2;

		mergeSort(tab, column, lewyIndex, pivot, pomocnicza);
		mergeSort(tab, column, pivot+1, prawyIndex, pomocnicza);
		merge(tab, column, lewyIndex, pivot, prawyIndex, pomocnicza);
	}
}

int main() {
	int tab[3][4] = { {4,5,6,4}, {3,3,2,7}, {1,1,1,1} };
	int pomocnicza[3][4];

	cout << "Przed sortowaniem \n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			cout << tab[i][j] << " ";
	  cout << endl;
	}
	
	for (int i = 0; i < 4; i++) 
		mergeSort(tab, i, 0, 2, pomocnicza); 

	cout << "\nPo sortowaniu \n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			cout << tab[i][j] << " ";
		cout << endl;
	}
	return 0;
}