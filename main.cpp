#include <iostream>

long long CountTheFactorial(int num) {
    if (num == 1)
        return num;
    return CountTheFactorial(num-1)*num; 
}

int main() {
    int factorial = 0;
    std::cout << "Podaj silnie do wyliczenia: ";
    std::cin >> factorial;
    std::cout << factorial << "! wynosi: " << CountTheFactorial(factorial);

    return 0;
}