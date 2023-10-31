#include <iostream>
using namespace std;

void bubbleSortDesc(int tab[], int size) {
    int n = size - 1;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (tab[j] < tab[j + 1])
                swap(tab[j], tab[j + 1]);
}

int main() {
    const int size = 5;
    int tab[size] = {8,20,10,15,2};
    bubbleSortDesc(tab, size);

    cout << "Posortowanie malejaco \n";
    for (auto element : tab)
        cout <<element << " ";

    return 0;
}