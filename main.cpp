#include <iostream>
using namespace std;

void quickSort(string& napis, int lewyIndex, int prawyIndex) {

	if (lewyIndex >= prawyIndex) return;

	int pivot = napis[prawyIndex];
	int index = lewyIndex;
	int granica = lewyIndex - 1;

	while(index < prawyIndex) {

		if (napis[index] < pivot) {
			granica++;
			if(granica != index)
				swap(napis[granica], napis[index]);
		}
		index++;
	}

	granica++;
	if (granica != prawyIndex)
		swap(napis[granica], napis[prawyIndex]);

	quickSort(napis, lewyIndex, granica -1 );
	quickSort(napis, granica + 1, prawyIndex);
}

int main() {
	string napis = "informatyka";
	quickSort(napis, 0, int(napis.length() -1));
	for (auto num : napis)
		cout << num << " ";
	return 0;
}