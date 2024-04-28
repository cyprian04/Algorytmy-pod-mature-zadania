#include <iostream>
#include <cmath>
using namespace std;

void selectionSortDesc(int tab[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int index = i;
        for (int j = i + 1; j < size; j++) {
            if (tab[index] < tab[j])
                index = j;
        }
        swap(tab[i], tab[index]);
    }
}

int main() {
    const int size = 5;
    int tab[size] = { 8,20,10,15,2 };
    for (const auto& n : tab)
        cout << n << " ";

    cout << "\n\n";
    selectionSortDesc(tab, size);

    for (const auto& n : tab)
        cout << n << " ";
    return 0;
 }