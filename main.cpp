#include <iostream>

int main() {
    const int rowCount = 5;
    const int columnCount = 5;
    int tablica[rowCount][columnCount] = {0}; // jeśli mogłem tak zastosować bo w tym podpunkcie nie było nic o pętli
    int nums[rowCount] = {5, 10, 20, 40, 80};

    for (int i = 0; i < rowCount; i++) 
         tablica[i][columnCount -1 -i] = nums[i];

    for (int i = 0; i < rowCount; i++){
        for (int j = 0; j < columnCount; j++) {
            std::cout << tablica[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}