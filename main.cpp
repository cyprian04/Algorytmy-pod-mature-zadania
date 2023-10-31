#include <iostream>
#include <algorithm>
using namespace std;

void bucketSort(int tab[], int size) {
    int maxElement = *max_element(tab, tab + size);
    int* pomocniczaTab = new int[++maxElement] {0};
    
    for (int i = 0; i < size; i++)
            pomocniczaTab[tab[i]]++;
     
    for (int i = maxElement+1; i > 0 ; i--) {
        if(pomocniczaTab[i] != 0)
            for (int j = 0; j < pomocniczaTab[i]; j++)
                cout << i << " ";
    }
    delete[] pomocniczaTab;
}

int main() {
    const int size = 8;
    int tab[size] = { 8,20,10,15,2,2,10,1 };
    bucketSort(tab, size);

    return 0;
}