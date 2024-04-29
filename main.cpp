#include <iostream>
using namespace std;

void quickSort(int tab[], int leftIndex, int rightIndex) {

    if (rightIndex > leftIndex) {
        int pivot = tab[rightIndex];
        int threshold = leftIndex - 1;

        while (leftIndex != rightIndex) {
            if (tab[leftIndex] < pivot)
                swap(tab[leftIndex], tab[++threshold]);
            leftIndex++;
        }
        swap(tab[++threshold], tab[rightIndex]);

        quickSort(tab, 0, threshold - 1);
        quickSort(tab, threshold + 1, rightIndex);
    }
}

int main() {
    int tab[9] = { 8,1,2,3,7,8,2,1,4 };
    int lewyIndex = 0;
    int prawyIndex = 8;
    quickSort(tab, lewyIndex, prawyIndex);

    for (const auto& n: tab)
        cout << n <<" ";
    return 0;
 }