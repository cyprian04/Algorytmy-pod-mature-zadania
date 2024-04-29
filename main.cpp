#include <iostream>
using namespace std;

void quickSort(int tab[], int leftIndex, int rightIndex, int pivot_in = -1) {
    if (rightIndex > leftIndex) {
        int threshold = leftIndex - 1;
        int index = leftIndex;

        if (pivot_in == -1) {
            cout << "f(" << leftIndex << "," << rightIndex << ")" << endl;
            int pivot = tab[rightIndex];

            while (leftIndex != rightIndex) {
                if (tab[leftIndex] < pivot)
                    swap(tab[leftIndex], tab[++threshold]);
                leftIndex++;
            }        
            swap(tab[++threshold], tab[rightIndex]);
        }
        else swap(tab[pivot_in], tab[rightIndex]);

        quickSort(tab, index, threshold - 1);
        quickSort(tab, threshold + 1, rightIndex);
    }
}

int main() {
    int tab[9] = { 8,1,2,3,7,8,2,1,4 };
    int lewyIndex = 0;
    int prawyIndex = 8;
    int pivot = 0;
    cout << "Podaj index pivotu: ";
    cin >> pivot;
    quickSort(tab, lewyIndex, prawyIndex, pivot);

    for (const auto& n: tab)
        cout << n <<" ";
    return 0;
 }