#include <iostream>
using namespace std;

void selectionSort(int tab[], int size) {
    for (int j = 0; j < size - 1; j++) {
        int index = j;
        for (int i = j + 1; i < size; i++) {
            if (tab[i] < tab[index])
                index = i;
        }
        swap(tab[j], tab[index]);
    }
}

int main() {
    const int size = 5;
    int tab[size] = { 8,20,10,15,2 };
    selectionSort(tab, size);

    for (auto element : tab)
        cout << element << " ";
    return 0;
}