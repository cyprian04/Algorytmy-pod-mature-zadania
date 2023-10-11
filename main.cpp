#include <iostream>

long long countTheFactorial(int num) {
    if (num == 1 || num == 0)
        return 1;
    return countTheFactorial(num - 1) * num;
}

int main() {
    int factorial = 0;
    std::cout << "Podaj silnie do wyliczenia: ";
    std::cin >> factorial;
    std::cout << factorial << "! wynosi: " << countTheFactorial(factorial);

    return 0;
}