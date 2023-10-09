#include <iostream>

int main() {
    const int rowCount = 5;
    const int columnCount = 5;
    int tablica[rowCount][columnCount];
    int nums[rowCount] = {1, 4, 9, 16, 25};

    for (int i = 0; i < rowCount; i++){
        for (int j = 0; j < columnCount; j++){
            if (i == j)
                tablica[i][j] = nums[i];
            else
                tablica[i][j] = 0;
            std::cout << tablica[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}