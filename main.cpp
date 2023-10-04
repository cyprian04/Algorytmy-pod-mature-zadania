#include <iostream>

long long CountTheFactorial(int num) {
    long long result = 1;
    for (int i = num; i > 0; i--)
         result*=i;
    return result;
}

int main() {
    int factorial = 0;

    std::cout << "Podaj silnie do wyliczenia: ";
    std::cin >> factorial;
    std::cout << factorial << "! wynosi: " << CountTheFactorial(factorial);
    return 0;
}