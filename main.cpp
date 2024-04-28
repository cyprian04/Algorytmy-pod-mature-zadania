#include <iostream>
#include <cmath>
using namespace std;

void bubbleSort(int tab[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - 1; j++)
            if (tab[j] < tab[j + 1])
                swap(tab[j], tab[j + 1]);
}

int main() {
    const int size = 5;
    int tab[5] = { 8,20,10,15,2 };
    bubbleSort(tab, size);
    
    for (const auto& n : tab)
        cout << n << " ";
    return 0;
 }