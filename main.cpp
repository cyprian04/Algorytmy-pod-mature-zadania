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
    int matrix[3][4] = { {4, 5, 6, 4},  
                         {3, 3, 2, 7},  
                         {1, 1, 1, 1} };
    int lewyIndex = 0;
    int prawyIndex = 3;
    int pomocnicznaTablica[4] {0};
    for (int i = 0; i < 3; i++)
        mergeSort(matrix[i], lewyIndex, prawyIndex, pomocnicznaTablica); // przekazywanie wskaźnika na pierwszy wiersz 2D tablicy (więc przkaże się 1 wymiarowa tablica)

    for (const auto& n : matrix) {
        for (const auto& k : n)
            cout << k << " ";
        cout << endl;
    }
    return 0;
 }