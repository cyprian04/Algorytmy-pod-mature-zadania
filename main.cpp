#include <iostream>
using namespace std;

void quickSort(int tab[], int lewyIndex, int prawyIndex, int pivotIndex = -1) {

	if (lewyIndex >= prawyIndex) return;
	
	int pivot;
	if (pivotIndex != -1) {
		pivot = tab[pivotIndex];
		swap(tab[pivotIndex], tab[prawyIndex]);
	}
	else
		 pivot = tab[prawyIndex];

	int index = lewyIndex;
	int granica = lewyIndex - 1;

	while(index < prawyIndex) {
		if (tab[index] < pivot) {
			granica++;
			if(granica != index)
				swap(tab[granica], tab[index]);
		}
		index++;
	}

	granica++;
	if (granica != prawyIndex)
		swap(tab[granica], tab[prawyIndex]);

	quickSort(tab, lewyIndex, granica - 1);
	quickSort(tab, granica + 1, prawyIndex);
}

int main() {
	int tab[9] = { 8,1,2,3,7,8,1,2,4 };
	int pivot = 0;
	cout << "Podaj pivot: ";
	cin >> pivot;

	quickSort(tab, 0, 8, pivot);

	for (auto num : tab)
		cout << num << " ";
	return 0;
}