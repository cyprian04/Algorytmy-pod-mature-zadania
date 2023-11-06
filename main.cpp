#include <iostream>
using namespace std;

void quickSort(int tab[], int lewyIndex, int prawyIndex) {
 
	int pivot = tab[prawyIndex];
	int index = lewyIndex;
	int granica = lewyIndex - 1;

	if (lewyIndex >= prawyIndex) return;

	while(index < prawyIndex) {

		if (tab[index] > pivot) {
			granica++;
			if(granica != index)
				swap(tab[granica], tab[index]);
		}
		index++;
	}
	granica++;

	if (granica != prawyIndex)
		swap(tab[granica], tab[prawyIndex]);

	quickSort(tab, lewyIndex, granica -1 );
	quickSort(tab, granica + 1, prawyIndex);
}

int main() {
	int tab[6] = {4,5,16,4,8,1};

	quickSort(tab, 0, 5);
	for (auto num : tab)
		cout << num << " ";
	return 0;
}