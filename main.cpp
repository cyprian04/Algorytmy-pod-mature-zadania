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

void mergeSort(int tab[], int lewyIndex, int prawyIndex, int pomocnicza[]) {

	if (lewyIndex != prawyIndex) {
		int pivot = (lewyIndex + prawyIndex) / 2;

		mergeSort(tab, lewyIndex, pivot, pomocnicza);
		mergeSort(tab, pivot+1, prawyIndex, pomocnicza);
		merge(tab, lewyIndex, pivot, prawyIndex, pomocnicza);
	}
}

int main() {
	int tab[3][4] = { {4,5,6,4}, {3,3,2,7}, {1,1,1,1} };
	int pomocnicza[4];

	cout << "Przed sortowaniem \n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			cout << tab[i][j] << " ";
	  cout << endl;
	}
	
	for (int i = 0; i < 3; i++) 
		mergeSort(tab[i], 0, 3, pomocnicza); // przekazuje tab[i] jako wskaźnik do danego wierza 2 wymiarowej tablicy. przez co przekazuje 1 wymiarową do funkcji

	cout << "\n Po sortowaniu \n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			cout << tab[i][j] << " ";
		cout << endl;
	}
	return 0;
}