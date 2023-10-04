#include <iostream>

int Fib(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    return Fib(n - 1) + Fib(n - 2); 
}

int main() {
    int num = 0;
    std::cout << "Podaj n-ty wyrazu ciagu Fibonacciego do obliczenia: ";
    std::cin >> num;
    std::cout << num << " wyraz ciagu ma wartosc: " << Fib(num);

    return 0;
}