#include <iostream>
#include <random>
using namespace std;

void quickSort(int tab[], int leftIndex, int rightIndex) {
    if (rightIndex > leftIndex) {
        cout << "f(" << leftIndex << "," << rightIndex << ")" << endl;
        random_device rd;
        mt19937 rng(rd());
        uniform_int_distribution<int> range(leftIndex, rightIndex);

        int pivot = range(rng);
        int threshold = leftIndex - 1;
        int index = leftIndex;
        swap(tab[pivot], tab[rightIndex]);

        while (leftIndex != rightIndex) {
            if (tab[leftIndex] < tab[rightIndex])
                swap(tab[leftIndex], tab[++threshold]);
            leftIndex++;
        }        
        swap(tab[++threshold], tab[rightIndex]);

        quickSort(tab, index, threshold - 1);
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