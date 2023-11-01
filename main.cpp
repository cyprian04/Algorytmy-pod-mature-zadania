#include <iostream>
#include <algorithm>
using namespace std;

void bucketSort(int tab[], int size) {
    int maxElement = *max_element(tab, tab + size);
    int minElement = *min_element(tab, tab + size);
    int newSize = maxElement + 1 - minElement;
    int* pomocniczaTab = new int[newSize]{ 0 };

    for (int i = 0; i < size; i++)
        pomocniczaTab[tab[i]-minElement]++;

    for (int i = newSize; i >= 0; i--) {
        if (pomocniczaTab[i] != 0)
            for (int j = 0; j < pomocniczaTab[i]; j++)
                cout << i + minElement << " ";
    }
    delete[] pomocniczaTab;
}

int main() {
    const int size = 8;
    int tab[size] = { 8,20,10,15,-2,2,-10,1 };
    bucketSort(tab, size);

    return 0;
}