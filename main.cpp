#include <iostream>
#include <algorithm>
using namespace std;

void bucketSortNegPos(int tab[], int size) {
    int maxElement = *max_element(tab, tab + size);
    int minElement = *min_element(tab, tab + size);
    int newSize = maxElement + 1 - minElement;

    int* pomocnicza = new int[newSize]{ 0 };
    int index = 0;
    for (int k = 0; k < size; k++)
        pomocnicza[tab[k] - minElement]++;

    for (int i = 0; i < newSize; i++)
        if (pomocnicza[i] != 0)
            for (int j = 0; j < pomocnicza[i]; j++)
                tab[index++] = i + minElement;

    delete[] pomocnicza;
}

int main() {
    const int size = 10;
    int tab[size] = { -54, 26, -93, 17, 77, 31, -44, 96, 99, 26};
    for (const auto& n : tab)
        cout << n << " ";

    cout << "\n\n";
    bucketSortNegPos(tab, size);

    for (const auto& n : tab)
        cout << n << " ";
    return 0;
 }