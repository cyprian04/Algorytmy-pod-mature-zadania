#include <iostream>
using namespace std;

void merge(int tab[], int lewyIndex, int pivot, int prawyIndex, int pomocnicza[]) {
    for (int i = lewyIndex; i <= prawyIndex; i++)
        pomocnicza[i] = tab[i];

    int indexLeft = lewyIndex;
    int indexRight = pivot + 1;
    int index = lewyIndex;

    while(indexLeft <= pivot && indexRight <= prawyIndex){
        if (pomocnicza[indexLeft] <= pomocnicza[indexRight])
            tab[index++] = pomocnicza[indexLeft++];
        else 
            tab[index++] = pomocnicza[indexRight++];
    }

    while (indexLeft <= pivot)
        tab[index++] = pomocnicza[indexLeft++];
}

void mergeSort(int tab[], int lewyIndex, int prawyIndex, int pomocnicza[]) {
    if (lewyIndex != prawyIndex) {    
        int pivot = (lewyIndex + prawyIndex) / 2;
        mergeSort(tab, lewyIndex, pivot, pomocnicza);
        mergeSort(tab, pivot+1, prawyIndex, pomocnicza);
        merge(tab, lewyIndex, pivot, prawyIndex, pomocnicza);
    }
}

int main() {
    int tab[8] = { 5, 8, 7, 2, 3, 2, 6, 8 };
    int lewyIndex = 0;
    int prawyIndex = 7;
    int pomocnicznaTablica[8] {0};
    mergeSort(tab, lewyIndex, prawyIndex, pomocnicznaTablica);

    for (const auto& n: tab)
        cout << n << " ";
    return 0;
 }