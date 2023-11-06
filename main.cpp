#include <iostream>
using namespace std;

void quickSort(int tab[], int lewyIndex, int prawyIndex, int pivotIndex) {

	if (lewyIndex >= prawyIndex) return;
	
	int pivot = tab[pivotIndex];
	int index = lewyIndex;
	int granica = lewyIndex - 1;
	swap(tab[pivotIndex], tab[prawyIndex]);

	while(index < prawyIndex) {
		if (tab[index] < pivot) {
			granica++;
			if(granica != index)
				swap(tab[granica], tab[index]);
		}
		index++;
	}

	granica++;
	if (granica != pivot)
		swap(tab[granica], tab[prawyIndex]);

	quickSort(tab, lewyIndex, granica - 1, granica - 1);
	quickSort(tab, granica + 1, prawyIndex, granica + 1);
}

int main() {
	int tab[6] = { 4,5,16,4,8,1 };
	int pivot = 0;
	cout << "Podaj pivot: ";
	cin >> pivot;

	quickSort(tab, 0, 5, pivot);

	for (auto num : tab)
		cout << num << " ";
	return 0;
}