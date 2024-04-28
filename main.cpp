#include <iostream>
#include <cmath>
using namespace std;

void insertionSortDesc(int tab[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int tempIndex = 0;
        int index = 0;
        for (int j = 0; j < i + 1; j++)
        {
            if (tab[j] < tab[i + 1]) {
                tempIndex++;
                index = j;
            }
        }
        for (int k = index; 0 < tempIndex; tempIndex--,k--)
            swap(tab[k], tab[k + 1]);
    }
}

int main() {
    const int size = 9;
    int tab[size] = { 54, 26, 93, 17, 77, 31, 44, 55, 20};
    for (const auto& n : tab)
        cout << n << " ";

    cout << "\n\n";
    insertionSortDesc(tab, size);

    for (const auto& n : tab)
        cout << n << " ";
    return 0;
 }