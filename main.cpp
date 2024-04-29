#include <iostream>
using namespace std;

void merge(int tab[3][4], int column, int lewyIndex, int pivot, int prawyIndex, int pomocnicza[3][4]) {
    for (int i = lewyIndex; i <= prawyIndex; i++)
        pomocnicza[i][column] = tab[i][column];

    int indexLeft = lewyIndex;
    int indexRight = pivot + 1;
    int index = lewyIndex;

    while(indexLeft <= pivot && indexRight <= prawyIndex){
        if (pomocnicza[indexLeft][column] <= pomocnicza[indexRight][column])
            tab[index++][column] = pomocnicza[indexLeft++][column];
        else 
            tab[index++][column] = pomocnicza[indexRight++][column];
    }

    while (indexLeft <= pivot)
        tab[index++][column] = pomocnicza[indexLeft++][column];
}

void mergeSort(int tab[3][4], int column, int lewyIndex, int prawyIndex, int pomocnicza[3][4]) {
    if (lewyIndex != prawyIndex) {    
        int pivot = (lewyIndex + prawyIndex) / 2;
        mergeSort(tab, column, lewyIndex, pivot, pomocnicza);
        mergeSort(tab, column, pivot+1, prawyIndex, pomocnicza);
        merge(tab, column, lewyIndex, pivot, prawyIndex, pomocnicza);
    }
}

int main() {
    int matrix[3][4] = { {4, 5, 6, 4},  
                         {3, 3, 2, 7},  
                         {1, 1, 1, 1} };
    int lewyIndex = 0;
    int prawyIndex = 2;
    int pomocnicznaTablica[3][4] {0};

    for (int i = 0; i < 4; i++)
        mergeSort(matrix, i, lewyIndex, prawyIndex, pomocnicznaTablica);

    for (const auto& n : matrix) {
        for (const auto& k : n)
            cout << k << " ";
        cout << endl;
    }
    return 0;
 }