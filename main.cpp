#include <iostream>
#include <algorithm>
using namespace std;

void bucketSortAsc(int tab[], int size) {
    int maxElement = *max_element(tab, tab + size);
    int* pomocnicza = new int[++maxElement]{ 0 };
    int index = 0;
    for (int k = 0; k < size; k++)
        pomocnicza[tab[k]]++;

    for (int i = 0; i < maxElement + 1; i++)
        if (pomocnicza[i] != 0)
            for (int j = 0; j < pomocnicza[i]; j++)
                tab[index++] = i;

    delete[] pomocnicza;
}

int main() {
    const int size = 10;
    int tab[size] = { 54, 26, 93, 17, 77, 31, 44, 96, 99, 26};
    for (const auto& n : tab)
        cout << n << " ";

    cout << "\n\n";
    bucketSortAsc(tab, size);

    for (const auto& n : tab)
        cout << n << " ";
    return 0;
 }