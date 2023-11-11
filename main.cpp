#include <iostream>
using namespace std;

void quickSort(int tab[], int lewyIndex, int prawyIndex) {

	if (lewyIndex >= prawyIndex) return;

	int pivotIndex = (lewyIndex + prawyIndex)/2;
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
	if (granica != prawyIndex)
		swap(tab[granica], tab[prawyIndex]);

	quickSort(tab, lewyIndex, granica - 1);
	quickSort(tab, granica + 1, prawyIndex);
}

int main() {
	int tab[9] = { 8,1,2,3,7,8,1,2,4 };

	quickSort(tab, 0, 8);

	for (auto num : tab)
		cout << num << " ";
	return 0;
}