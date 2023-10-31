#include <iostream>
using namespace std;

void insertionSort(int tab[], int size) {
    
    for (int i = 0; i < size - 1; i++) {
        int index = i + 1;
        int tempIndex = 0;
        for (int j = 0; j < index; j++){
            if (tab[j] > tab[index]) {
                tempIndex = j;
                
                for (int k = index; k > j; k--)
                    swap(tab[k], tab[k -1]);
            }
        }
    }
}

int main() {
    const int size = 4;
    int tab[size] = { 8,20,10,1 };
    insertionSort(tab, size);

    for (auto element : tab)
        cout << element << " ";
    return 0;
}